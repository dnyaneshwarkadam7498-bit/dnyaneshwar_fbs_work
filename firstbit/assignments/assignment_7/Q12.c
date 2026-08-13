#include<stdio.h>

void main()
{
int arr[5] = {10,20,30,40,50};
int *p = &arr[4];

printf("%d\n", *p);
printf("%d\n", *(p+1));// ?
printf("%d\n", *(p+2)); // ?
}