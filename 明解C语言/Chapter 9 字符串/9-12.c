#include <stdio.h>
#include <stdlib.h>

void put_strary2(const char st[][6], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        int j = 0;
        printf("st[%d]=\"", i);

        while (st[i][j])
            putchar(st[i][j++]);
        puts("\"");
    }
}

int main()
{
    char ch[][6] = {"chen", "lei"};

    put_strary2(ch, 2);

    return 0;
}
