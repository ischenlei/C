#include <stdio.h>
#include <stdlib.h>

#define swap(type, a, b) (type = a, a = b, b = type)

int main()
{
    int vx, vy, type;

    printf("����������������\n");
    printf("����1��");    scanf("%d", &vx);
    printf("����2��");    scanf("%d", &vy);

    swap(type, vx, vy);
    printf("����1��%d\n", vx);
    printf("����2��%d\n", vy);

    return 0;
}
