#include <stdio.h>
#include <stdlib.h>
//ÏÔÊ¾¾Å¾Å³Ë·¨±í
int main()
{
    int i, j;

    puts(" £ü  1  2  3  4  5  6  7  8  9");
    puts("------------------------------");
    for(i = 1; i <= 9; i++)
    {
        printf("%d£ü", i);
        for(j = 1; j <= 9; j++)
            printf("%3d", i * j);
            putchar('\n');
    }

    return 0;
}
