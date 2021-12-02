#include <iostream>
using namespace std;
class Empolyee
{
private:
    string firstName;
    string lastName;
    int salary;

public:
    void initial()
    {
        firstName = "\0";
        lastName = "\0";
        salary = 0;
    }
    void setfn(string a)
    {
        firstName = a;
    }
    string getfn()
    {
        return firstName;
    }
    void setln(string b)
    {
        lastName = b;
    }
    string getln()
    {
        return lastName;
    }
    void setsal(int a)
    {
        a > 0 ? salary = a : salary = 0;
    }
    int getsal()
    {
        return salary;
    }
};
int main()
{
    Empolyee person1;
    Empolyee person2;
    person1.initial();
    person1.setfn("min");
    person1.setln(" Zhang");
    person1.setsal(7000);
    person2.initial();
    person2.setfn("wei");
    person2.setln(" Wang");
    person2.setsal(8000);
    cout << "here are two employees\n"
         << person1.getfn() << person1.getln() << " his salary is " << person1.getsal() * 12 << endl
         << person2.getfn() << person2.getln() << " his salary is " << person2.getsal() * 12 << endl;
    person1.setsal(person1.getsal() * 1.1);
    person2.setsal(person2.getsal() * 1.1);
    cout << "everyone gets a rise of 10%\n"
         << person1.getfn() << person1.getln() << " his salary is " << person1.getsal() * 12 << endl
         << person2.getfn() << person2.getln() << " his salary is " << person2.getsal() * 12 << endl;
    return 0;
}