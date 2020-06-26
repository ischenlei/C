
//显示出一个直角在左下方的直角三角形（函数版）

#include <stdio.h>
#include <stdlib.h>

//---连续显示出no个*---
void put_stars(int no)
{
    while (no-- > 0)
        putchar('*');
}

int main()
{
    int i, ln;

    printf("三角形有几层:");
    scanf("%d", &ln);

    for (i = 0; i <= ln; i++){
        put_stars(i);
        putchar('\n');
    }

    return 0;
}
