#include<iostream>
using namespace std;
int main(){
    char a[11]={'\0'};
    const char *b[12]={"January","Februauy","March","April","May","June","July","August","September","October","November","December"};
    gets(a);
    a[2]='\0';
    a[5]='\0';
    char *pm=&a[0], *pd=&a[3],*py=&a[6];
    printf("%s %s, %s",b[atoi(pm)-1],pd,py);
    return 0;
}