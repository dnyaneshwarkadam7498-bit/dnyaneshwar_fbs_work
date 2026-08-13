#include<stdio.h>
void alternate(int arr[],int );
void main(){
    int i,arr[6];
    printf("enter the number");
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);

    }
    alternate(arr,6);
}
void alternate(int arr[],int size){
int i;
for(i=0;i<size;i+=2){
    printf("%d ",arr[i]);
}
} 
