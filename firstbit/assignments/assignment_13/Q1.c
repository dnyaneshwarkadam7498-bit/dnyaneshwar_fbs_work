#include<stdio.h>
struct student{
    int rollno;
    char Name[20];
    int marks;
};
void main(){
    struct student s1;
    printf("enter the roll no:");
    scanf("%d",&s1.rollno);
    printf("enter the name:");
    scanf("%s",s1.Name);
    printf("enter marks:");
    scanf("%d",s1.marks);

    printf("roll no=%d\n name=%s\n marks=%d",s1.rollno,s1.Name,s1.marks);

}