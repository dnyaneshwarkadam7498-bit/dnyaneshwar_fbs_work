#include<stdio.h>
void main(){
    int arr[7]={2,7,2,4,2,9,2};
    int i,index=0;
    int delete=2;
    for(i=0;i<7;i++){
        if(arr[i]!=delete){
            arr[index]=arr[i];
            index++;
        }
    }
    for(i=0;i<index;i++){
        printf("%d",arr[i]);
}
}