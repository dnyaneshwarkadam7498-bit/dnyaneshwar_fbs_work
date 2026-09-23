#include<stdio.h>
void main(){
    int unit;
    printf("enter the unit:");
    scanf("%d",&unit);
    if(unit>=1 && unit<=50){
        printf("30 rs/unit");
    }
    else if(unit>=51 && unit<=150){
        printf(" 40 rs/unit");

    }else if(unit>=151 && unit<=999){
        printf(" 50 rs/unit.");
    }
}