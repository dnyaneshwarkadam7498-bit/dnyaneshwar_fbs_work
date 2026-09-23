#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    int i;
    int max,smax;
    max=arr[0];
    smax=arr[0];

    for(i=0;i<5;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }

    }
    printf("%d",max);
    printf("%d",smax);
}