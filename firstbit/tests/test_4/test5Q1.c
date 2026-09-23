#include<stdio.h>

float sellingPrice(float cp, float discount)
{
    float sp;

    if(discount > 0)
    {
        if(discount <= 50)
        {
            sp = cp - (cp * discount / 100);
        }
        else
        {
            printf("Invalid discount\n");
            sp = cp;
        }
    }
    else
    {
        sp = cp;
    }

    return sp;
}

void main()
{
    float cp, discount, sp;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter discount: ");
    scanf("%f", &discount);

    sp = sellingPrice(cp, discount);

    printf("Selling Price = %.2f", sp);
}