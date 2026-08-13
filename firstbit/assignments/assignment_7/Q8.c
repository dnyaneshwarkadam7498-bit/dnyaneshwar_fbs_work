#include<stdio.h>
void main(){
    int arr[5],i;
    printf("enter the number");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    printf("elements are:");
    for(i=0;i<5;i++){
    printf("%d ",arr[i]);
    }
}