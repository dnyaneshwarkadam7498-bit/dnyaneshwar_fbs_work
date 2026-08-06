#include<stdio.h>
void add(int,int);
void main(){
    int n1,n2;
    printf("enter the numbers");
    scanf("%d%d",&n1,&n2);
    add(n1,n2);
}
void add(int n1,int n2){
    int res=n1+n2;
    printf("res=%d",res);

}