#include <stdio.h>
#include <stdlib.h>
//��ʾ�žų˷���
int main()
{
    int i, j;

    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
            printf("%3d", i * j);
            putchar('\n');
    }

    return 0;
}
