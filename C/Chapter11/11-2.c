#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[] = "ABC";
    char *ptr = "123";

    for (i = 0; str[i]; i++)
        putchar(str[i]);
    putchar('\n');

    for (i = 0; ptr[i]; i++)
        putchar(ptr[i]);
    putchar('\n');

    return 0;
}
