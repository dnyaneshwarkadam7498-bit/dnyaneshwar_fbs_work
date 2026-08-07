#include<stdio.h>
void main(){
    int n=18,sum=0,temp;
    temp=n;
   while(temp>0){
        
        sum=sum+temp%10;
        temp=temp/10;
        
   }
   if(n%sum==0)
   printf("%d is harshad no",n);
   else
   printf("not harshad no");
}