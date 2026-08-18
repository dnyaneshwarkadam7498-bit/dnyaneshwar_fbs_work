
#include<stdio.h>
#include<string.h>
void main(){
char str[] = "banana";

char *p = strrchr(str, 'a');

printf("%s", p);
}