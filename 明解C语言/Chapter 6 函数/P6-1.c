#include <stdio.h>
#include <stdlib.h>

//����һ����������int����������С��ֵ��
int minof (int x, int y)
{
    return ((x < y)? x : y);
}
int main()
{
    int na, nb;

    puts("����������������");
    printf("����1��");       scanf("%d", &na);
    printf("����2��");       scanf("%d", &nb);

    printf("��С������ֵ:%d", minof (na, nb) );

    return 0;
}
