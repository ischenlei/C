#include <stdio.h>
#include <stdlib.h>

int main()
{
    int high1 = 185;
    int high2 = 165;

    int *wangzhe, *chenlei;

    wangzhe = &high1;
    chenlei = &high2;

    printf("宇宙超级无敌美少女喜欢的人的身高：%d\n", *wangzhe);
    printf("二狗子喜欢的人的身高：%d\n", *chenlei);

    return 0;
}
