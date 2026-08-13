#include<stdio.h>
void revrse(int arr[],int);
void main(){
    int arr[5],i;
    printf("enter the number");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    revrse(arr,5);
}
void revrse(int arr[],int size){
    int i;
    for(i=size-1;i>=0;i--){
     printf("%d ",arr[i]);
    }
}