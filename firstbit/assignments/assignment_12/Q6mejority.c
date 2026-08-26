#include<stdio.h>

void main()
{
    int arr[7] = {2,2,1,2,3,2,2};
    int i,j,count;
    int k;

    for(i=0; i<7; i++)
    {
        count = 0;

        for(j=0; j<7; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                
                
            }

        }
        k=count;
        if(count > 7/2)
        {
            printf("Majority element = %d\n count=%d", arr[i],k);
            break;
        }
    }
}