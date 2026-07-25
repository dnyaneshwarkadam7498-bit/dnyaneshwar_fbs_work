#include<stdio.h>
void main(){
    char ch;
    float dis,price,fn;

    printf("enter the price=");
    scanf("%f",&price);
    fflush(stdin);
    printf("enter the student(y/n)?");
    scanf("%c",&ch);

    if(ch=='y'){
        if(price>=500)
        dis=price*0.20;
        else
            dis=price*0.10;

}else{
    if(price>600)
     dis=price*0.15;
     else
     dis=0;
}
fn=price-dis;
printf("discount is:%f",dis);
printf("finalprice is:%f",fn);
}