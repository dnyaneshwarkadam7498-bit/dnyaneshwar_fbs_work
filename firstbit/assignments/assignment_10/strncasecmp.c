#include <stdio.h>
#include <strings.h>

int main()
{
    printf("%d", strncasecmp("HELLO", "hello", 3));

    return 0;
}