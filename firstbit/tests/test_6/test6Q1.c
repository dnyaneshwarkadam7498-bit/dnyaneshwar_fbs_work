#include<stdio.h>
void main(){
    int arr[]={3,2,1,4,5};
    int brr[]={3,7,8,2,1};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i]==brr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }

}