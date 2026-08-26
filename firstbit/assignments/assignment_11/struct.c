#include<stdio.h>
#include<string.h>

struct student{
    int rollno;
    char name[20];
    int marks;

};
void main(){
    int a;
    struct student s1;
    a=10;
    s1.rollno=101;
    strcpy(s1.name,"om");
    s1.marks=75;
    printf("%s\n",s1.name);
    printf("%d\n",s1.marks);
    printf("%d",s1.rollno);

    struct student s2;
    printf("enter the rollno,name,marks:");
    scanf("%d",s2.rollno);
    scanf("%s",s2.name);
    scanf("%d",s2.marks);
    printf("rollno:%d\nname:%s\nmarks:%d",s2.rollno,s2.name,s2.marks);
}
