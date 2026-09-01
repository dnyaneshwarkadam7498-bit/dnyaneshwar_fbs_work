#include<stdio.h>
typedef struct date{
    int day,month,year;
}date;
typedef struct student
{
    int rollno;
    char name[20];
    int marks;
    date dob;
    date doa;
    date exam[5];
}student;

void store(student* );
void display(student* );

void main()
{
    student s;

    store(&s);

    display(&s);
   
}

void store( student* s)
{
    printf("enter the rollno name marks");
    scanf("%d",&s->rollno);
    scanf("%s",s->name);
    scanf("%d",&s->marks);
    scanf("%d",&s->dob.day,&s->dob.month,&s->dob.year);
    scanf("%d",&s->doa.day,&s->doa.month,&s->doa.year);
    scanf("%d",&s->exam[0].day,&s->exam[0].month,&s->exam[0].year);

    return s;
}

void display(student* s)
{
    printf("roll no = %d\n",s->rollno);
    printf("name = %s\n",s->name);
    printf("marks = %d\n",s->marks);
     printf("dob = %d\n",s->dob);
      printf("doa = %d\n",s->doa);
       printf("exam[0] = %d\n",s->exam[0]);
        printf("marks = %d\n",s->marks);
}
