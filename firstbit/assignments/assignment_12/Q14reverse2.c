#include<stdio.h>

void main()
{
    char str[] = "I love programming";
    int i, j, start, end;

    for(i=0; str[i]!='\0'; i++)
    {
    }

    end = i - 1;

    for(i=end; i>=0; i--)
    {
        if(str[i]==' ')
        {
            for(j=i+1; j<=end; j++)
            {
                printf("%c",str[j]);
            }

            printf(" ");
            end = i-1;
        }
    }

    for(j=0; j<=end; j++)
    {
        printf("%c",str[j]);
    }
}