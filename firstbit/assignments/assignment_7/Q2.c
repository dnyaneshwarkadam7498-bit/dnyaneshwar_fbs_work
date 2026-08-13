#include<stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    printf("%d\n",a);
    printf("%d\n",&a);
    *p=50;
    printf("a=%d",a);
}