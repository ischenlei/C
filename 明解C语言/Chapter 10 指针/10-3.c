#include <stdio.h>
#include <stdlib.h>

int main()
{
    int high1 = 185;
    int high2 = 165;

    int *wangzhe, *chenlei;

    wangzhe = &high1;
    chenlei = &high2;

    printf("���泬���޵�����Ůϲ�����˵���ߣ�%d\n", *wangzhe);
    printf("������ϲ�����˵���ߣ�%d\n", *chenlei);

    return 0;
}
