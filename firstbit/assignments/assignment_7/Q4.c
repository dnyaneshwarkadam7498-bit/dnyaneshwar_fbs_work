#include<stdio.h>

void main()
{
    int a = 30;
    int *p = &a;

    printf("%p\n",&a);
    printf("%p\n",p);
}