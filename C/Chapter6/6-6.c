
//������������
#include <stdio.h>
#include <stdlib.h>

//----�������������е����ֵ----
int maxof(int x, int y)
{
    return ((x > y)? x : y);
}

//----�����ĸ������е����ֵ----
int max4(int x, int y, int z, int w)
{
    return (maxof(maxof(w, x), maxof(y, z)));
}

int main()
{
    int na, nb, nc, nd;

    puts("�������ĸ�������");
    printf("����1��");       scanf("%d", &na);
    printf("����2��");       scanf("%d", &nb);
    printf("����3��");       scanf("%d", &nc);
    printf("����4��");       scanf("%d", &nd);

    printf("�ϴ�������ֵ:%d", max4(na, nb, nc, nd));

    return 0;
}
