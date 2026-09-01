#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    int marks;
};

struct student store(struct student s);
void display(struct student s);
void result(struct student s);
void main()
{
    struct student s;

    s = store(s);

    display(s);
    result(s);
}

struct student store(struct student s)
{
    printf("enter the rollno name marks");
    scanf("%d",&s.rollno);
    scanf("%s",s.name);
    scanf("%d",&s.marks);

    return s;
}

void display(struct student s)
{
    printf("roll no = %d\n",s.rollno);
    printf("name = %s\n",s.name);
    printf("marks = %d\n",s.marks);
}
void result(struct student s){
    if(s.marks>=40){
        printf("pass");

    }else{
        printf("fail");
    }
}