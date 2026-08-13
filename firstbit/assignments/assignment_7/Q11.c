#include<stdio.h>
void main(){
    int a=30;
    int *p=&a;
    printf("p=%d",p);
    *p=50;
    printf("*p=%d",a);
    a=90;
    printf("a=%d",*p);
}