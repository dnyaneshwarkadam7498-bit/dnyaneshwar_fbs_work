#include<stdio.h>
#include<stdlib.h>
void myreverse(int *arr,int);
void main(){
    int i,n,*arr;

    printf("enter the size:");
    scanf("%d",&n);

    arr=malloc(n*sizeof(int));

    printf("enter the element");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
 printf("reverse elements are:\n");
    myreverse(arr,n);
    
}

void myreverse(int *arr,int size){
    int i;
    for(i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}