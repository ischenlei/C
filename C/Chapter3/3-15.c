#include <stdio.h>
#include <stdlib.h>

int main()
{
    int na,nb��max��min;

    puts("����������������");

    printf("����A��");           scanf("%d",&na);
    printf("����B��");           scanf("%d",&nb);

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

    printf("�ϴ�ֵ�ǣ�%d\n",max);
    printf("��Сֵ�ǣ�%d\n",min);

    return 0;
}
