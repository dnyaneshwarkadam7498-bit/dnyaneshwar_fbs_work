#include<stdio.h>
void main(){
    int arr[5],i,j;
    printf("enter the number");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    printf("elements are:");
    for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
   for(i=0;i<5;i++){
    printf("%d ",arr[i]);
    }
}