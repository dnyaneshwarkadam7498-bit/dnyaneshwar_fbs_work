#include<stdio.h>

struct employee
{
    int empid;
    char empname[20];
    int salary;
};

struct employee store();
void display(struct employee e);
//void result(struct employee e);
void main()
{
    struct employee e;

    e = store(e);

    display(e);
   // result(e);
}

struct employee store()
{
    struct employee temp;
    printf("enter empid empname and salary");
    scanf("%d",&temp.empid);
    scanf("%s",temp.empname);
    scanf("%d",&temp.salary);

    return temp;
}

void display(struct employee e)
{
    printf("empid = %d\n",e.empid);
    printf("empname = %s\n",e.empname);
    printf("salary = %d\n",e.salary);
}
