#include<stdio.h>
void main(){
    char ch;
    printf("enter the charecter");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
      printf("vowels");
    }
    else{
         printf("consonents");
        }
}