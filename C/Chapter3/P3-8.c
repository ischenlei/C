#include <stdio.h>
#include <stdlib.h>

int main()
{
    int na,nb,nc,min;     //na,nb,nc,最小值

    puts("请输入三个整数。");

    printf("整数A：");           scanf("%d",&na);
    printf("整数B：");           scanf("%d",&nb);
    printf("整数C：");           scanf("%d",&nc);

    min=(na < nb) ? na : nb;     //把最小值赋给min
    min=(min < nc) ? min : nc;

    printf("最小值是：%d",min);

    return 0;
}
