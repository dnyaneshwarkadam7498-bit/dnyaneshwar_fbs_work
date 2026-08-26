#include<stdio.h>
void main(){
    int arr[7] = {0,5,0,2,8,0,3};
    int i,index=0,temp;
    for(i=0;i<7;i++){
        if(arr[i]!=0){
           temp=arr[i];
           arr[i]=arr[index];
           arr[index]=temp;
            index++;
        }
    }
  
    for(i=0;i<7;i++){
    printf("%d ",arr[i]);
    }
}