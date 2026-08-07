#include<stdio.h>
int odd_even();//declaration
int palindrome();
void leapyear();
void vowel();
void main(){
   int x= odd_even();//invoke
   if(x==1)
    printf("even");
    else
    printf("odd");
   
   int y= palindrome();
   if(y==1)
    printf("palindrome");
    else
    printf("not palindrome");
   
    leapyear();
    vowel();
}
int odd_even(){//defination
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%2==0)
        return 1;
        else
        return 0;
}
int palindrome(){
     int n,a,b;
    printf("enter the number");
    scanf("%d",&n);
    a=n/100;//1
    b=n%10;//1
      if(a==b)
        return 1;
    else
        return 0;
    
}
void leapyear(){
     int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100 !=0 )
        printf("is leap");
         else
        printf("not leap");
    
}
void vowel(){
    char ch;
    printf("enter the charecter");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
      printf("vowels");
    else
         printf("consonents");
        
}