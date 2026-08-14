#include<stdio.h>

void mycopy(char brr[],char crr[],int);
void main(){
   
    char brr[20]="dnyaneshwar";
    char crr[20];
   
       
        mycopy(brr,crr,5);
}
void mycopy(char brr[],char crr[],int x){
   int i;
   for(i=0;i<x;i++){
    crr[i]=brr[i];
   }
crr[i]='\0';
printf("%s",crr);
}