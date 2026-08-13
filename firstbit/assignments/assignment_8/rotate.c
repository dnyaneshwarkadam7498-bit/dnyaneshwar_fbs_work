#include<stdio.h>
void rotate(int arr[],int);
void main(){
int arr[]={1,2,3,4,5};
int temp,i,k=3;
for(i=0;i<k;i++){
    temp=arr[4];//5
    arr[4]=arr[3];
    arr[3]=arr[2];
    arr[2]=arr[1];
    arr[1]=arr[0];
    arr[0]=temp;
}
for(i=0;i<5;i++){
    printf("%d",arr[i]);
}
}

