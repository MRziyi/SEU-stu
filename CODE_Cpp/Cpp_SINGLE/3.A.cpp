#include <iostream>
using namespace std;
class Date
{
private:
    int y, m, d;

public:
    void sety(int a)
    {
        a > 0 ? y = a : printf("ERROR");        //规范输入 因cout存在问题故使用printf
    }
    int gety()
    {
        return y;
    }
    void setm(int a)
    {
        a > 0 &&a < 13 ? m = a : printf("ERROR\n");
    }
    int getm()
    {
        return m;
    }
    void setd(int a)                               //规范闰年输入
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            a > 0 &&a < 32 ? d = a : printf("ERROR\n");
        else if (m == 4 || m == 6 || m == 9 || m == 11)
            a > 0 &&a < 31 ? d = a : printf("ERROR\n");
        else if (y % 4 == 0)
            a > 0 &&a < 30 ? d = a : printf("ERROR\n");
        else
            a > 0 &&a < 29 ? d = a : printf("ERROR\n");
    }
    int getd()
    {
        return d;
    }
    Date() {}
    Date(int iny, int inm, int ind)
    {
        y = iny;
        m = inm;
        d = ind;
    }
    int sub(Date indate)                    //使用遍历法获得日期差值
    {
        int monthNum[13][2] = {{0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}};
        int year1, month1, day1, year2, month2, day2;           //这里的二维数组对应非闰、闰的月份
        int sum = 1, bigger = -1;
        if (y > indate.y)                       //以下的级联是调整角标为1 时间小于角标为2的值 从而确定遍历起终点
        {
            year2 = y;
            month2 = m;
            day2 = d;
            year1 = indate.y;
            month1 = indate.m;
            day1 = indate.d;
            bigger = 1;
        }
        else if (y < indate.y)
        {
            year1 = y;
            month1 = m;
            day1 = d;
            year2 = indate.y;
            month2 = indate.m;
            day2 = indate.d;
        }
        else if (m > indate.m)
        {
            year2 = y;
            month2 = m;
            day2 = d;
            year1 = indate.y;
            month1 = indate.m;
            day1 = indate.d;
            bigger = 1;
        }
        else if (m < indate.m)
        {
            year1 = y;
            month1 = m;
            day1 = d;
            year2 = indate.y;
            month2 = indate.m;
            day2 = indate.d;
        }
        else if (d > indate.d)
        {
            year2 = y;
            month2 = m;
            day2 = d;
            year1 = indate.y;
            month1 = indate.m;
            day1 = indate.d;
            bigger = 1;
        }
        else
        {
            year1 = y;
            month1 = m;
            day1 = d;
            year2 = indate.y;
            month2 = indate.m;
            day2 = indate.d;
        }
        while (year1 < year2 || month1 < month2 || day1 < day2)     //进行遍历
        {
            day1++;
            if (day1 > monthNum[month1][(year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0)])
            {
                month1++;
                day1 = 1;
            }
            if (month1 > 12)
            {
                year1++;
                month1 = 1;
            }
            sum++;
        }
        return ((sum - 1) * bigger);
    }
    bool isWeekend()
    {
        int yu = y, mu = m, du = d;
        bool judge;
        int week = 0;
        if (mu <= 2)
        {
            mu += 12;
            yu -= 1;
        }                       //下面的蔡勒公式求这个日期对应星期几 从而判断是否为周末
        week = (du + 1 + 2 * mu + 3 * (mu + 1) / 5 + yu + yu / 4 - yu / 100 + yu / 400) % 7;
        if (week == 0 || week > 5)
            judge = true;
        else
            judge = false;
        return judge;
    }
};
class Time
{
private:
    int h, min, s;

public:
    void seth(int a)                   //同理 一下报错为规范输入
    {
        a >= 0 &&a < 24 ? h = a : printf("ERROR\n");
    }
    int geth()
    {
        return h;
    }
    void setmin(int a)
    {
        a >= 0 &&a < 60 ? min = a : printf("ERROR\n");
    }
    int getmin()
    {
        return min;
    }
    void sets(int a)
    {
        a >= 0 &&a < 60 ? s = a : printf("ERROR\n");
    }
    int gets()
    {
        return s;
    }
    Time() {}
    Time(int inh, int inmin, int ins)
    {
        h = inh;
        min = inmin;
        s = ins;
    }
    int sub(Time t)         //全部转换为秒来计算差值
    {
        int total1 = h * 60 * 60 + min * 60 + s, total2 = t.h * 60 * 60 + t.min * 60 + t.s * 60;
        return (total1 - total2);
    }
};
template <class T>
bool compare(T t1, T t2)
{
    bool clusion;
    t1.sub(t2) >= 0 ? clusion = 1 : clusion = 0;
    return clusion;
}
int main()
{
    Date a1, b1, c1(1999, 12, 31);
    Time a2, b2(13, 20, 0), c2(23, 59, 59);
    a1.sety(2019);
    a1.setm(3);
    a1.setd(1);
    cout << "here is a try of non-leap year detect and waring\n";
    b1.sety(2021);
    b1.setm(2);
    b1.setd(29);
    b1.sety(2020);
    b1.setm(2);
    b1.setd(29);
    cout << "here're 3 dates\n"
         << a1.gety() << ' ' << a1.getm() << ' ' << a1.getd() << endl
         << b1.gety() << ' ' << b1.getm() << ' ' << b1.getd() << endl
         << c1.gety() << ' ' << c1.getm() << ' ' << c1.getd() << endl
         << "is the date2 weekend?(0 is not,1 is yes) " << b1.isWeekend() << endl
         << "the interval of date1 and date3 is " << a1.sub(c1) << endl
         <<"here is a try of invaild time data\n";
    a2.seth(25);
    a2.seth(6);
    a2.setmin(30);
    a2.sets(50);
    cout << "here're 3 times\n"
         << a2.geth() << ' ' << a2.getmin() << ' ' << a2.gets() << endl
         << b2.geth() << ' ' << b2.getmin() << ' ' << b2.gets() << endl
         << c2.geth() << ' ' << c2.getmin() << ' ' << c2.gets() << endl
         <<"the interval of time1 and time3 is "<<a2.sub(c2)<<" seconds\n"
         <<"here is a compare of date2 and date3 "<<compare(b1,c1)<<endl
         <<"here is a compare of time1 and time2 "<<compare(a2,b2)<<endl;
    return 0;
}