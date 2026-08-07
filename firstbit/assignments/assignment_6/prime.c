#include<stdio.h>
int prime(int*);
void main(){
    int n=13;
    prime(&n);
}
 int prime(int *n){
    int count=0;
    for(int i=1;i<=*n;i++){
        if(*n%i==0){
           count++;
        }
        
    }
    if(count==2)
    printf("prime");
    else
    printf("not prime");
    return 0;
}
