#include<stdio.h>
void main(){
    int i,sum;
    for(i=0;i<=5;i++){
        if(i%2!=0){
           sum=sum+i;
        }
    }
   
            printf("%d",sum);
}