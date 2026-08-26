#include<stdio.h>
void main(){
    int arr[6] = {4,-2,7,-5,8,-1};
    int i,index=0,temp;
    for(i=0;i<6;i++){
        if(arr[i]<0){
           temp=arr[i];
           arr[i]=arr[index];
           arr[index]=temp;
            index++;
        }
    }
  
    for(i=0;i<6;i++){
    printf("%d ",arr[i]);
    }
}