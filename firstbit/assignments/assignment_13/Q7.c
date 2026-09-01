#include<stdio.h>
struct date{
    int date,month,year;
};

void displaydate(struct date t);
void main(){
  struct date t;
    printf("enter the date month and year");
    scanf("%d%d%d",&t.date,&t.month,&t.year);

    
  
   
     displaydate(t);
      printf("\n%d: %d: %d:",t.date,t.month,t.year);
}

    


void displaydate(struct date t){
     printf("\ndate=%d: month=%d: year=%d:",t.date,t.month,t.year);
}
