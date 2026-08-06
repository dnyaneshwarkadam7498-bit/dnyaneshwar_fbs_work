#include<stdio.h>
void main(){
    int n=145,rem,sum=0,temp;
    temp=n;
    while(n>0){
      rem=n%10;
      int fact=1;
       while(rem>0){
        fact=fact*rem;
        rem--;
       }
       sum=sum+fact;
       n=n/10;
    }
    if(sum==temp){
        printf("strong");
    }else{
        printf("not strong");
    }
    
}