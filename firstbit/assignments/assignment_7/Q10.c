#include<stdio.h>
void main(){
    int a=30;
    int *p=&a;
    printf("address of a=%d\n ",&a);
    printf("address of a store in p=%d\n ",p);
    printf("goes to that address and gets the value:%d\n ",*p);
}