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
    double na, nb;

    puts("����������ʵ����");
    printf("ʵ��A��");     scanf("%lf", &na);
    printf("ʵ��B��");     scanf("%lf", &nb);

    swap(&na, &nb);

    puts("��������������ֵ��");
    printf("����A��%f\n", na);
    printf("����B��%f\n", nb);

    return 0;
}
