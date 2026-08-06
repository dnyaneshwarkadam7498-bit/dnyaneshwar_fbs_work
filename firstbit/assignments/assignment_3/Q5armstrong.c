#include<stdio.h>
void main(){
    int n=153,i=1,sum=0,rem,temp;
    temp=n;
  
    while(n>0){
        rem=n%10;//3
        sum=sum+rem*rem*rem;
        n=n/10;//15
    }
    if(temp==sum){
        printf("armstrong");
    }else{
        printf("not armstrong");
    }
}