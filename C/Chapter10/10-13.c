#include <stdio.h>
#include <stdlib.h>

void int_set(int vc[], int no, int va1)
{
    int i;

    for (i = 0; i < no; i++)
        vc[i] = va1;
}

int main()
{
    int i;
    int ary[] = {1, 2, 3, 4, 5};

    int_set(ary, 5, 0);

    for (i = 0; i < 5; i++)
        printf("ary[%d] = %d", i, ary[i]);

    return 0;
}
