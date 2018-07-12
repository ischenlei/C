#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char cs[3][128];

    for (i = 0; i < 3; i++) {
        printf("cs[%d]£º", i);
        scanf("%s", cs[i]);
    }

    for (i = 0; i < 3; i++)
        printf("cs[%d]=\"%s\"\n", i, cs[i]);

    return 0;
}
