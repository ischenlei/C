#include <stdio.h>
#include <stdlib.h>

void swap(int *nx, int *ny)
{
    int temp = *nx;
    *nx = *ny;
    *ny = temp;
}

void sotr2(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2)
        swap(n1, n2);
}

int main()
{
    int na, nb, nc;

    puts("����������������");
    printf("����A��");     scanf("%d", &na);
    printf("����B��");     scanf("%d", &nb);
    printf("����C��");     scanf("%d", &nc);

    sotr2(&na, &nb, &nc);

    puts("����������ֵ�������С�");
    printf("����A��%d\n", na);
    printf("����B��%d\n", nb);
    printf("����C��%d\n", nc);

    return 0;
}
