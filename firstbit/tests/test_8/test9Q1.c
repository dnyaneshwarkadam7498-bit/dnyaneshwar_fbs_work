#include<stdio.h>
#include<string.h>
void reverse(char str[]);
void main(){
    char str[]="dnyaneshwar";
    reverse(str);
    printf("%s",str);
}
    void reverse(char str[]){
     int i,j,temp;
     for(i=0,j=strlen(str)-1;i<j;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
     }
    }
