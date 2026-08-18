#include<stdio.h>
#include<string.h>
void main(){
    char str[]="dnyaneshwar";
    char arr[15];
    strncpy(arr,str,5);
    printf("%s",arr);
}