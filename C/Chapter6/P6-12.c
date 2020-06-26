#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    static int va[5];

    for (i = 0; i < 5; i++)
        printf("%d\t", va[i]);

    putchar('\n');

    return 0;
}
