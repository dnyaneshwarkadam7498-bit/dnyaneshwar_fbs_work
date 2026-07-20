#include<stdio.h>
void main(){
    int hour,min=85,rem;
  
    hour=min/60;
    rem=min%60;
    printf("%dhour",hour);
    printf("%dmin",rem);
}