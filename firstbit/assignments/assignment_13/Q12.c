#include<stdio.h>
typedef struct admin
{
    int id;
    char name[20];
    int salary;
    int allowance;
}admin;
void store(admin* arr,int);
void display(admin* arr,int);
void main(){
    int i;
    admin arr[5],brr[5],crr[5];

    printf("enter details of arr");
     store(arr,5);
     printf("enter details of brr");
     store(brr,5);
     printf("enter details of crr");
     store(crr,5);
     printf("details of arr:");
     display(arr,5);
     printf("details of arr:");
     display(brr,5);
     printf("details of arr:");
     display(crr,5);
}
void store(admin* arr,int size){
    int i;
    printf("enter the id name salary and allowance :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i].id);
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].salary);
        scanf("%d",&arr[i].allowance);

    }
}
void display(admin arr[],int size){
    int i;
    for(i=0;i<size;i++){
    printf("admin id:%d",arr[i].id);
    printf("admin name:%s",arr[i].name);
    printf("admin salary:%d",&arr[i].salary);
    printf("admin allowance:%d",&arr[i].allowance);
}
}