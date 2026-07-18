#include<stdio.h>
void main(){
    int a=10,b=20,temp;
    temp=a;//the value of a is temprarary store in temp
    a=b;//
    b=temp;
    printf("a=%d\n",a);
    printf("b=%d",b);


}