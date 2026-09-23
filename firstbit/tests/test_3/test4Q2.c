#include<stdio.h>
void main(){
    int n,pow,result=1,i;
    printf("Enter the Number:");
    scanf("%d ",&n);

    printf("enter the pow:");
    scanf("%d",&pow);

    for(i=1;i<=pow;i++){
       result=result*n;

    }
    printf("%d",result);


}