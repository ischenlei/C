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

    puts("请输入两个整数。");
    printf("整数A：");     scanf("%d", &na);
    printf("整数B：");     scanf("%d", &nb);

    sotr2(&na, &nb);

    puts("将两数的值升序排列。");
    printf("整数A是%d\n", na);
    printf("整数B是%d\n", nb);

    return 0;
}
