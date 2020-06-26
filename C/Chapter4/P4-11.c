#include <stdio.h>
#include <stdlib.h>
//输入一个整数，连续显示出该整数个*
int main()
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d",&no);

    while(no-- > 0)

        putchar('*');

    return 0;
}
