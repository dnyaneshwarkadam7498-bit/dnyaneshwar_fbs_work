#include<stdio.h>
void main(){
    char ch;
    printf("enter alphabet");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("uppercase");
    else if(ch>='a' &&  ch<='z')
    printf("lowercase");
    else
    printf("not alphabet");
}