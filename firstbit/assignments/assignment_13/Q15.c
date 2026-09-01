#include<stdio.h>
typedef struct student
{
    int id;
    char name[20];
    int marks;
}student;
student store(student arr[],int);
void main(){
    int i;
    student arr[5];
     store(arr,5);
     for(i=0;i<5;i++){
     printf("id:%d name:%s marks:%d",arr[i].id,arr[i].name,arr[i].marks);
}
}
student store(student arr[],int size){
    int i;
    printf("enter the id name and marks :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i].id);
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].marks);
 

    }
}