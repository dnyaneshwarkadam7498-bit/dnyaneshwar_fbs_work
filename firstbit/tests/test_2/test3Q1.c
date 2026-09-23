#include<stdio.h>
void main(){
    int i;
    for(i=10;i<=25;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    printf("\n");
   for(i=0;i<=15;i++){
    if(i%2==0){
        printf("%d ",i);
    }
   }
}