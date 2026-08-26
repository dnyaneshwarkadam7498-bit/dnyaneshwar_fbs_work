#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr;
    int i,n;
    printf("enter size:");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("elements are:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}