#include <stdio.h>
#include <stdlib.h>

int main()
{
    int na,nb,nc,min;     //na,nb,nc,��Сֵ

    puts("����������������");

    printf("����A��");           scanf("%d",&na);
    printf("����B��");           scanf("%d",&nb);
    printf("����C��");           scanf("%d",&nc);

    min=(na < nb) ? na : nb;     //����Сֵ����min
    min=(min < nc) ? min : nc;

    printf("��Сֵ�ǣ�%d",min);

    return 0;
}
