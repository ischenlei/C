
///�붨��һ������ʽ��diff(x,y),����x,y��ֵ֮��

#include <stdio.h>
#include <stdlib.h>

#define diff(x, y) ((x) - (y))

int main()
{
    int vx, vy;

    printf("������һ��������\n");
    printf("����1��");   scanf("%d", &vx);
    printf("����2��");   scanf("%d", &vy);

    if (vx > vy)
        printf("����֮��Ϊ��%d", diff(vx, vy));
    else
        printf("����֮��Ϊ��%d", diff(vy, vx));

    putchar('\n');
    return 0;
}
