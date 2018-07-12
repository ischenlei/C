#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx;
    printf("请输入一个整数：");      scanf("%d",&vx);

    if((vx%10)==5)
        puts("这个数的个位是五。");
    else
        puts("这个数的个位不是五");
    return 0;
}
