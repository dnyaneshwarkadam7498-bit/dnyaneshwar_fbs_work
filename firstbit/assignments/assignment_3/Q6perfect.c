#include<stdio.h>
void main(){
    int i=1,n=28,sum=0;
    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==n){
        printf("perfect number");
    }else{
        printf("not");
    }
}