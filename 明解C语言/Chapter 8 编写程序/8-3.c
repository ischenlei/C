#include <stdio.h>
#include <stdlib.h>

#define putsa(str) (putchar('\a'), puts(str))
int main()
{
    int na;

    printf("请输入一个整数：");
    scanf("%d", &na);

    if (na)
        putsa("这个数不是0。");
    else
        putsa("这个数是0。");

    return 0;
}
