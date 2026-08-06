#include<stdio.h>
void main(){
    int n=7,i=1,count;
    while(i<=n){
        if(n%i==0){
         count++;
        }
        i++;
    }
    if(count==2){
        printf("prime");

    }else{
        printf("not prime");
    }


}