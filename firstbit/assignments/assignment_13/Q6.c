#include<stdio.h>

struct HR
{
    int id;
    char name[20];
    int salary;
    int commission;
};

struct HR store();
void display(struct HR a);

void main()
{
    struct HR a;

    a = store();

    display(a);
    
}

struct HR store()
{
    struct HR temp;
    printf("enter the id name salary and commission");
    scanf("%d",&temp.id);
    scanf("%s",temp.name);
    scanf("%d",&temp.salary);
    scanf("%d",&temp.commission);
    return temp;
}

void display(struct HR a)
{
    printf("id = %d\n",a.id);
    printf("name = %s\n",a.name);
    printf("salary = %d\n",a.salary);
    printf("commission = %d\n",a.commission);
}
