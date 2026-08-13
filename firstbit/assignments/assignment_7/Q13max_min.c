#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50},i;

 
        int max=arr[0];
        int min=arr[0];
        for(i=0;i<5;i++){
             if(max<arr[i])
             max=arr[i];
             if(min>arr[i])
             min=arr[i];
    }
    printf("%d",max);
    printf("%d",min);
}