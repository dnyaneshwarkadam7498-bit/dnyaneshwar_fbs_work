#include<stdio.h>
#include<string.h>
void main(){
    char a[20]="hello";
    char b[20];

    strcpy(b,a);
    printf("%s",b);
}