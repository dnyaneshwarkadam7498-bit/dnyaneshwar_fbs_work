#include<stdio.h>
void main(){
    int n,a,b;
    printf("enter the number");
    scanf("%d",&n);
    a=n/100;//1
    b=n%10;//1

    if(a==b){
        printf("is palindrome");
    }else{
        printf("not palindrome");
    }
}