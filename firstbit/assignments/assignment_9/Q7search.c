#include<stdio.h>
void search(char[],char);
void main(){
    char str[]="dnyaneshwar";
    char ch='i';

    search(str,ch);
}
void search(char str[],char ch){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=ch){
            printf("element found");
            return;

        }
        }
        printf("not found");
    }

