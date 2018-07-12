#include <stdio.h>
#include <stdlib.h>

//----返回3个int型整数中最小值----
int min3 (int x, int y , int z)
{
    int min = x;
    if (min > y)  min = y;
    if (min > z)  min = z;
    return (min);
}

int main()
{
    int na, nb, nc;

    puts("请输入三个整数。");
    printf("整数1：");       scanf("%d", &na);
    printf("整数2：");       scanf("%d", &nb);
    printf("整数3：");       scanf("%d", &nc);

    printf("较小整数的值:%d", min3(na, nb, nc));
    return 0;
}
