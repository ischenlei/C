#include <stdio.h>
#include <stdlib.h>
//输入一个整数连续显示该整数个*.
int main()
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    for(i = 1; i <= no; i++)
        putchar('*');
    putchar('\n');
    return 0;
}
