#include <stdio.h>
#include <stdlib.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int a, b, c, d;

    printf("请输入四个整数。\n");
    printf("整数1：");    scanf("%d", &a);
    printf("整数2：");    scanf("%d", &b);
    printf("整数3：");    scanf("%d", &c);
    printf("整数4：");    scanf("%d", &d);

    printf("max(max(a, b), max(c, d))=%d\n", max(max(a, b), max(c, d)));
    printf("max(max(max(a, b), c), d)=%d\n", max(max(max(a, b), c), d));

    return 0;
}
