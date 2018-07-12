#include <stdio.h>
#include <stdlib.h>
//从输入整数开始倒数到0

int main()
{
    int no;

    printf("请输入一个整数:");
    scanf("%d",&no);

    while(no >= 0)
    {
        printf("%d ",no);
        no--;                 //no的值递减
    }
    putchar('\n');            //换行

    return 0;
}
