#include<stdio.h>
void main(){
    int arr[]={1,2,3};
    int brr[]={1,2,3,4,5};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(arr[i]==brr[j]){
                printf("%d",brr[j]);
            }
        }
    }
}