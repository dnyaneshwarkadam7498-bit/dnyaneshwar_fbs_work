#include<stdio.h>
void reverse();
void oprater();
void triangle();
void main(){
    reverse();
    oprater();
    triangle();
}
void reverse(){
     int r1,sum=1;
    int no=54372;
    while(no>0){
        r1=no%10;
        sum=sum*r1;
        no=no/10;
        printf("%d",r1);
    }
}
void oprater(){
    int no1,no2;
   char op;
   printf("enter No1= ");
   scanf("%d",&no1);
   printf("enter No2= ");
   scanf("%d",&no2);
  fflush(stdin);
   printf("opraters(+ - * / %%):");
   scanf("%c",&op);

   if(op=='+')
   printf("addition is %d",no1+no2);
   else if(op=='-')
    printf("subtraction is %d",no1-no2);
   else if(op=='/')
    printf("division is %d",no1/no2);
 else if(op=='*')
    printf("multiplication is %d",no1*no2);
   else if(op=='%')
    printf("mod is %d",no1%no2);
   else
    printf("invalid oprater");
    }
void triangle(){
   int a,b,c;
    printf("enter the length");
    scanf("%d\n%d\n%d\n",&a,&b,&c);


        if(a==b && b==c)
            printf("Equilateral Triangle");
            else if(a==b || b==c || a==c)
            printf("Isosceles Triangle");
        else
            printf("Scalene Triangle");
} 

