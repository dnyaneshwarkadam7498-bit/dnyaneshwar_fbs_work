#include<stdio.h>
void main(){
    int arr[] = {2,7,4,1,9,5};
    int i,j,target=10;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]+arr[j]==target){
                printf("%d+%d=%d",arr[i],arr[j],target);
            }
        }
    }

}