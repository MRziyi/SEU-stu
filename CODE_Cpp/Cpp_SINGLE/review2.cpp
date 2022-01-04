#include <iostream>
#include<cmath>
using namespace std;
class ComplexNum
{
private:
    int a, b;

public:
    ComplexNum(int ain, int bin)
    {
        a = ain;
        b = bin;
    }
    ComplexNum(){};
    void seta(int ain)
    {
        a = ain;
    }
    void setb(int bin)
    {
        b = bin;
    }
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
    double mod(){
        return sqrt(a*a+b*b);
    }

} ;
int main()
{
    ComplexNum a(2,3);
    cout<<a.geta()<<endl<<a.mod();
    ComplexNum b[3]={ComplexNum(1,2),ComplexNum(4,2),ComplexNum(3,4)};
    return 0;
}