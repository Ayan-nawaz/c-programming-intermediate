#include<stdio.h>
int main(){

    int a,b;//a>b

    printf("enter the divident:");
    scanf("%d",&a);

    printf("enter the divisor:");
    scanf("%d",&b);

    int q=a/b;
    int r=a-b*q; //divisor*quitent+remainder=divident
    
    printf("the remainder when %d is divided by % is:%d" ,a,b,r);

    return 0;
}