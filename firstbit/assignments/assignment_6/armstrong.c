#include<stdio.h>
int armstrong(int*);
void main(){
    int n,x;
    printf("enter the number");
    scanf("%d",&n);

     x=armstrong(&n);
   
}

    int armstrong(int* n){
        int rem,sum=0,temp;
        temp=*n;
    while(temp>0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==*n)
    printf("armstrong");
    else
    printf("not armstrong");
  return 0;
    
}