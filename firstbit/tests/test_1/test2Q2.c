#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive");

    }else if(n<0){
        printf("negative");

    }else if(n==0){
        printf("zero");
    }
    else{
        printf("invalid number");
    }
}