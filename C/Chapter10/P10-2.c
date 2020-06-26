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

    puts("请输入三个整数。");
    printf("整数A：");     scanf("%d", &na);
    printf("整数B：");     scanf("%d", &nb);
    printf("整数C：");     scanf("%d", &nc);

    sotr2(&na, &nb, &nc);

    puts("将三个数的值升序排列。");
    printf("整数A是%d\n", na);
    printf("整数B是%d\n", nb);
    printf("整数C是%d\n", nc);

    return 0;
}
