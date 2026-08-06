#include<stdio.h>
void main(){
    int i,j,rem,sum,n,temp,fact;
    printf("enter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=0;
        temp=i;
        while(temp>0){
            rem=temp%10;//last digit
            fact=1;
            for(j=1;j<=rem;j++){
                fact=fact*j;
            }
          sum=sum+fact;
          temp=temp/10;

        }
        if(sum==i){
            printf("%d\n",i);
        }

    }
}