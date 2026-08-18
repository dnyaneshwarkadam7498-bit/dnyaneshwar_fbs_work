#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[] = "DNYANESHWAR";
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("%s", str);

    return 0;
}