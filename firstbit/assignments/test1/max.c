#include<stdio.h>

void main()
{
    int arr[]={10,72,3,4,5};
    int i,max,second;

    max=arr[0];
    second=arr[0];

    for(i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]!=max)
        {
            second=arr[i];
        }
    }

    printf("first max=%d\n",max);
    printf("second max=%d",second);
}