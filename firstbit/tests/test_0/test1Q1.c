#include<stdio.h>
void main(){
    int hour,min,sec,total;
    printf("Enter the hr,minand sec:");
    scanf("%d%d%d",&hour,&min,&sec);

   
    total=(hour*60*60)+(min*60)+sec;
    printf("total sec:%d",total);
}