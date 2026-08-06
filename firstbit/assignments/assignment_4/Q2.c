#include<stdio.h>
void main(){
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
        
        if(status==0){
            printf("%d\n",i);
        }

    }
}