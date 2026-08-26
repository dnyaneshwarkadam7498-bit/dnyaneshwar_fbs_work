#include<stdio.h>
#include<string.h>

void main()
{
    char str1[] = "listen";
    char str2[] = "silent";
    char temp;
    int i,j;

    // str1 sort
    for(i=0; str1[i]!='\0'; i++)
    {
        for(j=i+1; str1[j]!='\0'; j++)
        {
            if(str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    // str2 sort
    for(i=0; str2[i]!='\0'; i++)
    {
        for(j=i+1; str2[j]!='\0'; j++)
        {
            if(str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(str1[i]==0 && str2[i]==0)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }
}