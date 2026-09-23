#include<stdio.h>
#include<string.h>
void main(){
    char str[50];
    int i,len;
    printf("enter string:");
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
}