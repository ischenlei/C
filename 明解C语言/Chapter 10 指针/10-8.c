#include <stdio.h>
#include <stdlib.h>

void swap(int *nx, int *ny)
{
    int temp = *nx;
    *nx = *ny;
    *ny = temp;
}

void sotr2(int *n1, int *n2)
{
    if (*n1 > *n2)
        swap(n1, n2);
}

int main()
{
    int na, nb;

    puts("����������������");
    printf("����A��");     scanf("%d", &na);
    printf("����B��");     scanf("%d", &nb);

    sotr2(&na, &nb);

    puts("��������ֵ�������С�");
    printf("����A��%d\n", na);
    printf("����B��%d\n", nb);

    return 0;
}
