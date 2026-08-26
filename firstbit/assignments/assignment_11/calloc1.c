#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
} 