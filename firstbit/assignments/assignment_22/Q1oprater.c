#include<stdio.h>
void main(){
   int no1,no2;
   char op;
   printf("enter No1= ");
   scanf("%d",&no1);
   printf("enter No2= ");
   scanf("%d",&no2);
  fflush(stdin);
   printf("opraters(+ - * / %%):");
   scanf("%c",&op);

   if(op=='+'){
   printf("addition is %d",no1+no2);
   }else if(op=='-'){
    printf("subtraction is %d",no1-no2);
   }else if(op=='/'){
    printf("division is %d",no1/no2);

   }else if(op=='*'){
    printf("multiplication is %d",no1*no2);
   }else if(op=='%'){
    printf("mod is %d",no1%no2);
   }else{
    printf("invalid oprater");
   }
}