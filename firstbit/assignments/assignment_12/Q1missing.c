#include<stdio.h>
void main(){
    int arr[5]={1,2,4,5,3};
    int sum=0,i;
    int expected;
    int missing;
    int n=6;
    for(i=0;i<5;i++){
           sum=sum+arr[i];
    }
    expected=n*(n+1)/2;
    missing=expected-sum;
    printf("%d",missing);
}