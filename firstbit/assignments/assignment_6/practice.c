#include<stdio.h>
int swap(int*,int*);
void main(){
    int a=10,b=20;
    printf("before swaping a=%d b=%d",a,b);
  int x=swap(&a,&b);
    printf("after swaping a=%d b=%d",a,b);

}
int swap(int* a,int* b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}