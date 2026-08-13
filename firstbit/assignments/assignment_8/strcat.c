#include<stdio.h>
#include<string.h>
void main(){
    char a[20]="hello ";
    char b[]="world";
    strcat(a,b);
    printf("%s",a);
}