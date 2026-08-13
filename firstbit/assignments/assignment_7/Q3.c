#include<stdio.h>

void main()
{
    int a = 20;
    int *p = &a;

    a = 80;

    printf("%d", *p);
}