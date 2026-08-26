#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50};
    int i,k=2,temp=0;
    for(i=0;i<k;i++){
        temp=arr[4];
        arr[4]=arr[3];
        arr[3]=arr[2];
        arr[2]=arr[1];
        arr[1]=arr[0];
        arr[0]=temp;

    }
    for(i=0;i<5;i++){
    printf("%d ",arr[i]);
    }
}