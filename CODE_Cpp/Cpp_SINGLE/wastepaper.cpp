#include<iostream>
using namespace std;
int main(){
    int year1=2021;
    cout<<(year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0);
}