#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    arr = (int *)malloc(3 * sizeof(int));

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("Before realloc:\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    //arr = (int *)realloc(arr, 5 * sizeof(int));

    arr[3] = 40;
    arr[4] = 50;

    printf("\nAfter realloc:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }



    return 0;
}