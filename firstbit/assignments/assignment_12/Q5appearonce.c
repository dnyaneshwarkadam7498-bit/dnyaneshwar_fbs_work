#include<stdio.h>
void main(){
    int arr[7]={2,7,4,7,4,2,9};
    int count,i,j;
    for(i=0;i<7;i++){
     count=0;
    
    for(j=0;j<7;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }

    if(count==1){
        printf("%d",arr[i]);
    }
  }
}
