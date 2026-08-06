#include<stdio.h>
void main(){
    int i,n,rem,temp,sum;
   
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     temp=i;
     sum=0;

    while(temp>0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
       
    }
    if(sum==i){
        printf("%d\n",i);
    }
    
}
}