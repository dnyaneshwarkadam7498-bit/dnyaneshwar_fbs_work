#include<stdio.h>
void main(){
    int n=5,factorial=1,i=n;
    while(i>0){
        factorial=factorial*i;
        i--;
      
    }
     printf("%d",factorial);

}