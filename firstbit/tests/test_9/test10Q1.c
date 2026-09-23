#include <stdio.h>

typedef struct product
{
    char name[20];
    float price;
    int quantity;
} product;

void store(product arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("\nEnter product %d details:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", arr[i].name);

        printf("Enter price: ");
        scanf("%f", &arr[i].price);

        printf("Enter quantity: ");
        scanf("%d", &arr[i].quantity);
    }
}

void display(product arr[], int size)
{
    int i;
    float total, grandTotal = 0;

    printf("\n----- BILL -----\n");

    for(i = 0; i < size; i++)
    {
        total = arr[i].price * arr[i].quantity;

        printf("\nProduct : %s", arr[i].name);
        printf("\nPrice   : %.2f", arr[i].price);
        printf("\nQuantity: %d", arr[i].quantity);
        printf("\nTotal   : %.2f\n", total);

        grandTotal = grandTotal + total;
    }

    printf("\nGrand Total = %.2f\n", grandTotal);
}

int main()
{
    product cart[5];

    store(cart, 5);
    display(cart, 5);

    return 0;
}