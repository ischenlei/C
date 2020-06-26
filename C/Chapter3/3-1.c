#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx;

    printf("请输入一个整数：");
    scanf("%d",&vx);

    if(vx%5)
       puts("您输入数是不能被5整除。");

    return 0;
}
