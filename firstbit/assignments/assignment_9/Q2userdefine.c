#include<stdio.h>

void mycopy(char brr[],char crr[]);
void main(){
   
    char brr[20]="dnyaneshwar";
    char crr[20];
   
       
        mycopy(brr,crr);
}
void mycopy(char brr[],char crr[]){
   int i;
   for(i=0;brr[i]!='\0';i++){
    crr[i]=brr[i];
   }
crr[i]='\0';
printf("%s",crr);
}