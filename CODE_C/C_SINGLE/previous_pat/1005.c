#include<stdio.h>
int main(void){
    int total=0,i=0,cut=0;
    scanf("%d",&total);
    int input[total],test[51]={0},input2[total];
    test[1]=1;
    test[0]=1;
    for(i;i<total;i++){
        scanf("%d",&input[i]);
        input2[i]=input[i];
    }
    i=i-1;
    for(i;i>-1;i--){
        while(input[i]!=1){
            if(input[i]%2==0){
                input[i]/=2;
                test[input[i]]=1;
            }else{
                input[i]=(input[i]*3+1)/2;
                test[input[i]]=1;
            }
        }
    }
    for(i;i<total;i++){
        if(test[input2[i]]!=1){
            cut++;
        }
    }
    i=i-1;
    for(i;i>0;i--){
        if(test[input2[i]]!=1){
            if(cut>1){
                printf("%d ",input2[i]);
                cut--;
            }else{
                printf("%d",input2[i]);
            }
        }
    }
    return 0;
}