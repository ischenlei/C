#include <stdio.h>
#include <stdlib.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int a, b, c, d;

    printf("�������ĸ�������\n");
    printf("����1��");    scanf("%d", &a);
    printf("����2��");    scanf("%d", &b);
    printf("����3��");    scanf("%d", &c);
    printf("����4��");    scanf("%d", &d);

    printf("max(max(a, b), max(c, d))=%d\n", max(max(a, b), max(c, d)));
    printf("max(max(max(a, b), c), d)=%d\n", max(max(max(a, b), c), d));

    return 0;
}
