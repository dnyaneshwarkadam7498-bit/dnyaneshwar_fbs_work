#include<stdio.h>
typedef struct date{
    int date,month,year;
}date;
void store(date*,int);
void displaydate( date* ,int);
void main(){
   date arr[5],brr[5],crr[5];
printf("enter the date of arr");
store(arr,5);

printf("enter the date of brr");
store(arr,5);

printf("enter the date of crr");
store(arr,5);

printf("enter the date of arr");
displaydate(arr,5);

printf("enter the date of brr");
displaydate(arr,5);

printf("enter the date of crr");
displaydate(arr,5);
}
void store(date* arr,int size){
    int i;
    for(i=0;i<size;i++){
     printf("enter the date month and year");
    scanf("%d%d%d",&arr[i].date,&arr[i].month,&arr[i].year);
}
}
void displaydate(date* arr,int size){
     int i;
     printf("date:%d",arr[i].date);
     printf("month:%d",arr[i].month);
     printf("year:%d",arr[i].year);
}
