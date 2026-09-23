#include<stdio.h>
typedef struct  date{
    int day,month,year;
}date;
void main(){
    date d;
     
    printf("enter the date:");
    scanf("%d",&d.day);

    printf("enter the month:");
    scanf("%d",&d.month);

    printf("enter the year:");
    scanf("%d",&d.year);

    if(d.month<1 || d.month>12){
        printf("invalid data");
    }
    else if(d.day<1){
        printf("invalid data");
    }
    else if(d.month==2){
        if(d.day<=28)
            printf("valid data");
          else
            printf("invalid data");
        }
        else if(d.month==4||d.month==6||d.month==9||d.month==11){
            if(d.day<=30)
            printf("valid data");
            else
            printf("invalid data");
        }
        else{
            if(d.month<=31)
                printf("valid data");
                else
                printf("invalid data");
            }
        }
        
    
