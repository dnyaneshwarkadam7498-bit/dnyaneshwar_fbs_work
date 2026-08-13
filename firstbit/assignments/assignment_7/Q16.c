#include<stdio.h>
void storeArray(int*,int );
void main(){
    int arr[10];
    int brr[5];
    int crr[7],i;
    storeArray(arr,5);
   for(i=0;i<10;i++){
    printf("nter the numbers of arr;");
    scanf("%d",&arr[i]);
   }
   for(i=0;i<5;i++){
    printf("enter the numbers of brr:");
    scanf("%d",&brr[i]);
   }
   for(i=0;i<7;i++){
    printf("enter the numbers of crr:");
    scanf("%d",&crr[i]);
   }


}


void storeArray(int *arr,int size){
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);

}
}