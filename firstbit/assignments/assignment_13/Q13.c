#include<stdio.h>
typedef struct HR
{
    int id;
    char name[20];
    int salary;
    int commission;
}HR;
void store(HR* arr,int);
void display(HR* arr,int);
void main(){
    int i;
    HR arr[5],brr[5],crr[5];

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
void store(HR* arr,int size){
    int i;
    printf("enter the id name salary and commission :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i].id);
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].salary);
        scanf("%d",&arr[i].commission);

    }
}
void display(HR* arr,int size){
    int i;
    for(i=0;i<size;i++){
    printf("HR id:%d",arr[i].id);
    printf("HR name:%s",arr[i].name);
    printf("HR salary:%d",&arr[i].salary);
    printf("HR commission:%d",&arr[i].commission);
}
}