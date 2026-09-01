#include<stdio.h>

struct admin
{
    int id;
    char name[20];
    int salary;
    int allowance;
};

struct admin store();
void display(struct admin a);

void main()
{
    struct admin a;

    a = store();

    display(a);
    
}

struct admin store()
{
    struct admin temp;
    printf("enter the id name salary and allowance");
    scanf("%d",&temp.id);
    scanf("%s",temp.name);
    scanf("%d",&temp.salary);
    scanf("%d",&temp.allowance);
    return temp;
}

void display(struct admin a)
{
    printf("id = %d\n",a.id);
    printf("name = %s\n",a.name);
    printf("salary = %d\n",a.salary);
    printf("allowance = %d\n",a.allowance);
}
