#include<stdio.h>
void main(){
    int marks;

    printf("enter the marks=");
    scanf("%d",&marks);

    if(marks>=75 && marks<=100)
        printf("Distinction");
    else if(marks>=65 && marks<=75)
       printf("first class");
       else if(marks>=55 && marks<=65)
         printf("second class");
         else if(marks>=45 && marks<=40)
          printf("pass");
          else if(marks<40)
          printf("fail");
          else
          printf("invalid marks");
}