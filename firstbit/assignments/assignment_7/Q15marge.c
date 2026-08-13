#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50};
    int brr[8]={2,3,4,5,6,7,8,9,};
    int crr[14],i;
    for(i=0;i<5;i++){
        crr[i]=arr[i];
    }
    for(i=0;i<13;i++){
        crr[i]=brr[i];
    }
    for(i=0;i<13;i++){
    printf("%d",crr[i]);
    }
}