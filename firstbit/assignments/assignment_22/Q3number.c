#include<stdio.h>
void main(){
    int a=30,b=40,c=50;
    if(a>b  &&  a>c){
        printf("%d",a);

    }else if(b>a && b>c){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
}