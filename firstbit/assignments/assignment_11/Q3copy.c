#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr,*brr;
    int n,i;
printf("enter the size:");
scanf("%d",&n);

arr=malloc(n*sizeof(int));
brr=malloc(n*sizeof(int));

printf("enter the element:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    brr[i]=arr[i];
}

printf("brr:\n");
for(i=0;i<n;i++){
    printf("%d ",brr[i]);
}


}

