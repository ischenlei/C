#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;

    printf("请输入一个数：");
    scanf("%d",&no);

    if(no%2)
        puts("输入的整数为奇数。");
    return 0;
}
