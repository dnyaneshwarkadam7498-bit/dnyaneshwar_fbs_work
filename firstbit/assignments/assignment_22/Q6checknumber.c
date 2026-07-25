#include<stdio.h>
void main(){
    int no;
    printf("enter the number=");
    scanf("%d",&no);

     if(no%3==0 && no%5==0)
    printf("no is divisible by 3 and 5");
    else if(no%3==0)
    printf("no is divisible by 3");
    else if(no%5==0)
    printf("no is divisible by 5");
    else
    printf("divisible by none");

}