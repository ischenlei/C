#include <stdio.h>
#include <stdlib.h>

//----����3��int����������Сֵ----
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

    puts("����������������");
    printf("����1��");       scanf("%d", &na);
    printf("����2��");       scanf("%d", &nb);
    printf("����3��");       scanf("%d", &nc);

    printf("��С������ֵ:%d", min3(na, nb, nc));
    return 0;
}
