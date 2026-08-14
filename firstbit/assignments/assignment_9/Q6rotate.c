#include<stdio.h>
void rotate(int [],int,int);
void main(){
    int arr[]={10,20,30,40,50};
    int i,k;
    printf("how many number rotate");
    scanf("%d",&k);
    rotate(arr,5,k);
}
void rotate(int arr[],int size,int k){
    int i,j,temp;
    for(i=0;i<k;i++){
        temp=arr[size-1];
        for(j=size-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}