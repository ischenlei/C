
//显示出一个直角在左下方的直角三角形（函数版）

#include <stdio.h>
#include <stdlib.h>

//---连续显示no个字符ch---
void put_nchar(int ch, int no)
{
    while (no-- > 0)
        putchar(ch);
}

int main()
{
    int i, ln;
    printf("三角形有几层：");
    scanf("%d", &ln);

    for (i = 0; i <= ln; i++){
        put_nchar(' ', ln - i);
        put_nchar('*', i);
        putchar('\n');
    }

    return 0;
}
