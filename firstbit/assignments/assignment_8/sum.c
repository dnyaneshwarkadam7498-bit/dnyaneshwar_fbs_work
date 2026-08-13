#include<stdio.h>
void sum(int arr[],int);
void main(){
    int arr[5],i;
    printf("enter the number");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
        sum(arr,5);
    
}
void sum(int arr[],int size){
    int i,sum=0;
    for(i=0;i<size;i++){
           sum=sum+arr[i];
    }
    printf("%d",sum);
}