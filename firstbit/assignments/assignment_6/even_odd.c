#include<stdio.h>
int even_odd(int*);
void main(){
    int n=14;
   
     even_odd(&n);
}

    int even_odd(int* n){
        if(*n%2==0)
         printf("even");
         else
         printf("odd");
         return 0;
    }
