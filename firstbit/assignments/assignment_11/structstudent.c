#include<stdio.h>
#include<string.h>

struct student{
    int rollno;
    char name[20];
    int marks;

};
struct student storestudent ();
struct student display(struct student s1);

void main(){
    int a;
    struct student s1,s2,s3;
    printf("enter the roll name marks");
    s1=storestudent();

    s2=display(s2);

   
}
struct student storestudent(){
struct student temp;
 
    scanf("%d", &temp.rollno);
    scanf("%S",temp.name);
    scanf("%d",&temp.marks);
    return temp;
}

struct student display(struct student s1){

     printf("roll no=%d",s1.rollno);
    printf("name=%s",s1.name);
    printf("marks=%d",s1.marks);
    return s1;

}
