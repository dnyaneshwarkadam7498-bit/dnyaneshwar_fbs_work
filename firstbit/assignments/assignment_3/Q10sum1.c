#include<stdio.h>
void main(){
    int n=12345,first,last,sum;
    last=n%10;//5
    while(n>=10){
        n=n/10;
    }
    first=n;
    sum=first+last;
    printf("%d",sum);

}