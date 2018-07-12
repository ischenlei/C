#include <stdio.h>
#include <stdlib.h>

void put_strary(const char st[][6], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("st[%d]=\"%s\"\n", i, st[i]);
}

int main()
{
    char ch[][6] = {"chen", "lei"};

    put_strary(ch, 2);

    return 0;
}
