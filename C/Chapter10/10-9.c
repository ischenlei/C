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

    puts("请输入两个实数。");
    printf("实数A：");     scanf("%lf", &na);
    printf("实数B：");     scanf("%lf", &nb);

    swap(&na, &nb);

    puts("互换了两个数的值。");
    printf("整数A是%f\n", na);
    printf("整数B是%f\n", nb);

    return 0;
}
