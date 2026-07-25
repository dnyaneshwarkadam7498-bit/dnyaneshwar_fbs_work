#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the length");
    scanf("%d\n%d\n%d\n",&a,&b,&c);


        if(a==b && b==c){
            printf("Equilateral Triangle");

        }else if(a==b || b==c || a==c){
            printf("Isosceles Triangle");
        }else{
            printf("Scalene Triangle");
        }
    }

    
