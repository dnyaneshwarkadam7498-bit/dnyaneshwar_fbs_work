#include<stdio.h>
typedef struct student
{
    int id;
    char name[20];
    int marks;
}student;
void store(student* arr,int);
void display(student* arr,int);
void main(){
    int i;
    student arr[5],brr[5],crr[5];

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
void store(student* arr,int size){
    int i;
    printf("enter the id name and marks :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i].id);
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].marks);
 

    }
}
void display(student arr[],int size){
    int i;
    for(i=0;i<size;i++){
    printf("student id:%d",arr[i].id);
    printf("student name:%s",arr[i].name);
    printf("student marks:%d",&arr[i].marks);
}
}