#include<stdio.h>
void areaofcircle();
void swap();
void avrage();
void sum();
void tempreture();
void square_cube();
void percentage();
void perimeter();
void main(){
    areaofcircle();
    swap();
   avrage();
   sum();
   tempreture();
   square_cube();
   percentage();
   perimeter();

}
void areaofcircle(){
     int r=10,a;
    float pi=3.14;
    a= pi*r*r;
    printf("area of circle is =%d",a);

}
void swap(){
 int a=10,b=20,temp;
    temp=a;//the value of a is temprarary store in temp
    a=b;//
    b=temp;
    printf("\nswap no a=%d ",a);
    printf("b=%d",b);
}
void avrage(){
int a=10,b=20,c=30,d=40,e=50,avg;
    avg=(a+b+c+d+e)/5;
    printf("\nAvg is=%d",avg);
}

void sum(){
 int a=10,b=20,sum;
    sum=a+b;
    printf("\nsum is=%d",sum);
}
void tempreture(){
     float c=24,f;
    f=(c*9/5)+32;
    printf("\ntempreture is=%.1f",f);
}
void square_cube(){
 int a=5,square,cube;
    square=a*a;
    printf("\nsquare=%d ",square);
    cube=a*a*a;
    printf("cube=%d",cube);
}
void percentage(){
int total=0,s1=85,s2=76,s3=89,s4=96,s5=99;
    float percentage;
    total=s1+s2+s3+s4+s5;
   printf("\ntotal is=%d ",total);
   percentage=(total/500.0)*100;
   printf("percentage is=%f",percentage);
}
void perimeter(){
     int l=24,b=5,p;
    p=2*(l+b);
    printf("\nperimeter is=%d",p);
}