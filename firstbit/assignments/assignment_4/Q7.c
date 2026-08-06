#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=10;i++){
        for(k=10;k>i;k--){
            printf("  ");
        }
        for(j=i;j<=10;j++){
            printf("* ");
        }
        printf("\n");
    }
}