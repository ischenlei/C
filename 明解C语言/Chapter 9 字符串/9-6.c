#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char cs[][6] = {"Turbo", "NA", "DOHC",};

    for (i = 0; i < 3; i++)
        printf("cs[%d]=\"%s\"\n", i, cs[i]);

    return 0;
}
