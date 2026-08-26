#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    arr = (int *)calloc(5, sizeof(int));

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }



    return 0;
}