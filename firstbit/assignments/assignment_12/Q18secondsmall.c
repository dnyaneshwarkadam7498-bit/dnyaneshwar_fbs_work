#include<stdio.h>
void main(){
    int arr[7]={1,2,3,4,5,6,7};
    int i,min;
    min=arr[0];
    for(i=0;i<7;i++){
        if(arr[i]< min){
            min=arr[i];
        }
        int second=9999;
  for(i=0;i<7;i++){
        if(arr[i]>min && arr[i]<second){
            second=arr[i];
        }
        }
        printf("%d",second);
    }
}