#include<stdio.h>
typedef struct employee
{
    int id;
    char name[20];
    int salary;
}employee;
void store(employee* arr,int);
void display(employee* arr,int);
void main(){
    int i;
    employee arr[5],brr[5],crr[5];

    printf("enter details of arr");
     store(&arr,5);
     printf("enter details of brr");
     store(&brr,5);
     printf("enter details of crr");
     store(&crr,5);
     printf("details of arr:");
     display(&arr,5);
     printf("details of arr:");
     display(&brr,5);
     printf("details of arr:");
     display(&crr,5);
}
void store(employee* arr,int size){
    int i;
    printf("enter the id name and salary :");
    for(i=0;i<size;i++){
        scanf("%d",&arr->id);
        scanf("%s",arr->name);
        scanf("%d",&arr->salary);
 

    }
}
void display(employee* arr,int size){
    int i;
    for(i=0;i<size;i++){
    printf("employee id:%d",arr->id);
    printf("employee name:%s",arr->name);
    printf("employee salary:%d",&arr->salary);
}
}