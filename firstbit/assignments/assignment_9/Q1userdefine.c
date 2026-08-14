#include<stdio.h>
void myreverse(int arr[],int);

void main(){
    int arr[5],i;
    char brr[20]="dnyaneshwar";
    char crr[20];
    printf("enter the element:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
        myreverse(arr,5);
}
       
void myreverse(int arr[],int size){
int i;
for(i=size-1;i>=0;i--){
    printf("%d ",arr[i]);

}
}

