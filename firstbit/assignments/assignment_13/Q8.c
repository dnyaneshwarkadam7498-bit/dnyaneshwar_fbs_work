#include<stdio.h>

typedef struct product
{
    int id;
    char name[20];
    int quantity;
    int price;
}product;

product store(product*,int);
void display(product*,int);

void main()
{
    product arr[5],brr[5],crr[5];
printf("enter the details of arr");
    store(arr,5);

    printf("enter the details of brr");
    store(brr,5);

    printf("enter the details of crr");
    store(crr,5);

   printf("arr");
    display(arr,5);
    
    printf("brr");
    display(brr,5);
    
    printf("crr");
    display(crr,5);
    
}

 product store(product* arr,int size)
{
    int i;
    for(i=0;i<size;i++){
    printf("enter id name quantity and price");
    scanf("%d",&arr[i].id);
    scanf("%s",arr[i].name);
    scanf("%d",&arr[i].quantity);
    scanf("%d",&arr[i].price);
    }
}

void display(product* arr,int size)
{
    int i;
    for(i=0;i<size;i++){
    printf("id = %d\n",arr[i].id);
    printf("name = %s\n",arr[i].name);
    printf("quantity = %d\n",arr[i].quantity);
    printf("price = %d\n",arr[i].price);
    }
}
