#include<stdio.h>
struct data
{
    char a[11];
    char b[11];
    int score;
};
int main(void){
    int n=0,i=0;
    struct data stu[10000],stumax,stumin;
    scanf("%d",&n);
    for(i;i<n;i++){
        scanf("%s %s %d",&(stu[i].a),&(stu[i].b),&(stu[i].score));
        if(i==0){
            stumax=stu[0];
            stumin=stu[0];
        }else{
            if(stu[i].score>stumax.score){
                stumax=stu[i];
            }else if(stu[i].score<stumin.score){
                stumin=stu[i];
            }
        }
    }
    printf("%s %s\n",stumax.a,stumax.b);
    printf("%s %s",stumin.a,stumin.b);
    return 0;
}
