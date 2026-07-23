#include<stdio.h>
void main(){
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100 !=0 ){
        printf("is leap");

    }else{
        printf("not leap");
    }

}