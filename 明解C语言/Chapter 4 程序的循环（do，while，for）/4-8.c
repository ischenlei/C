#include <stdio.h>
#include <stdlib.h>
//从输入整数开始倒数到0

int main()
{
    int no;

    printf("请输入一个整数:");
    scanf("%d",&no);

    while (no >= 0)
        printf("%d ",no--);          //no的值在显示之后递减

    putchar('\n');

    return 0;
}
