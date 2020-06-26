
//调用其他函数
#include <stdio.h>
#include <stdlib.h>

//----返回两个整数中的最大值----
int maxof(int x, int y)
{
    return ((x > y)? x : y);
}

//----返回四个整数中的最大值----
int max4(int x, int y, int z, int w)
{
    return (maxof(maxof(w, x), maxof(y, z)));
}

int main()
{
    int na, nb, nc, nd;

    puts("请输入四个整数。");
    printf("整数1：");       scanf("%d", &na);
    printf("整数2：");       scanf("%d", &nb);
    printf("整数3：");       scanf("%d", &nc);
    printf("整数4：");       scanf("%d", &nd);

    printf("较大整数的值:%d", max4(na, nb, nc, nd));

    return 0;
}
