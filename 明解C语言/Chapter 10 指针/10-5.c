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

    puts("请输入两个整数。");
    printf("整数1：");       scanf("%d", &na);
    printf("整数2：");       scanf("%d", &nb);

    swap(&na, &nb);

    puts("互换了两数的值。");
    printf("整数A是%d\n", na);
    printf("整数B是%d\n", nb);

    return 0;
}
