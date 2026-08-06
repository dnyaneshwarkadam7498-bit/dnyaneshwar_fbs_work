#include<stdio.h>

void fun()
{
    int x = 50;

    printf("%d\n", x);

    x = 100;

    printf("%d\n", x);
}

void main()
{
    int x = 10;

    printf("%d\n", x);

    fun();

    printf("%d", x);
}