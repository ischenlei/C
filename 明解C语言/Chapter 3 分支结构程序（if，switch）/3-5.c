#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx;

    printf("请输入一个整数：");
    scanf("%d",&vx);

    if(vx=0)
        puts("该整数是零。");
    else
        printf("该整数不是零。");
    return 0;
}
