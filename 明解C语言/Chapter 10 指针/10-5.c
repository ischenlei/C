#include <stdio.h>
#include <stdlib.h>

void swap(int *nx, int *ny)
{
    int temp = *nx;
    *nx = *ny;
    *ny = temp;
}

int main()
{
    int na, nb;

    puts("����������������");
    printf("����1��");       scanf("%d", &na);
    printf("����2��");       scanf("%d", &nb);

    swap(&na, &nb);

    puts("������������ֵ��");
    printf("����A��%d\n", na);
    printf("����B��%d\n", nb);

    return 0;
}
