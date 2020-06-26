#include <stdio.h>
#include <stdlib.h>

int main()
{
    int na,nb，max，min;

    puts("请输入两个整数。");

    printf("整数A：");           scanf("%d",&na);
    printf("整数B：");           scanf("%d",&nb);

    if(na > nb)
    {
        max = na;
        min = nb;
    }
    else
    {
        max = nb;
        min = na;
    }

    printf("较大值是：%d\n",max);
    printf("较小值是：%d\n",min);

    return 0;
}
