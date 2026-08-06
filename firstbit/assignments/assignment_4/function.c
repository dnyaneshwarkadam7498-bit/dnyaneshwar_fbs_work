#include<stdio.h>
int Q1();
int Q2();
int Q3();
void main(){
    Q1();
    Q2();
    Q3();

}
int Q1(){
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
    if(sum==i)
        printf("%d\n",i);
    
}
} 
int Q2(){
    int i,j,status,no;
    printf("enter the number");
    scanf("%d",&no);
    for(i=2;i<=no;i++){
         status=0;
          for(j=2;j<i;j++){
            if(i%j==0){
             status=1;
              break;
              }
            }
        
        if(status==0)
            printf("%d\n",i);
         }
}
int Q3(){
     int n,i,sum,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<i;j++){
        if(i%j==0){
            sum=sum+j;
            
        }
    }
    if(sum==i){
        printf("%d",i);
    }

}
}