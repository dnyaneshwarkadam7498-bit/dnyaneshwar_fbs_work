#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50},found=0,search,i;
    printf("search the number");
    scanf("%d",&search);
    for(i=0;i<5;i++){
        if(arr[i]==search){
            found=1;
            break;
        }
    }
        if(found==1)
        printf("element found ");
        else
        printf("element not found");

    
}