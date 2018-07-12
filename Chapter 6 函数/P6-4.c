
//使用6-3中的sqr函数创建另一个函数， 返回int型整数四次幂
#include <stdio.h>
#include <stdlib.h>

//----返回平方---
int sqr(int x)
{
    return (x * x);
}

//---返回四次方---
int pow4(int x)
{
    return (sqr(sqr(x)));
}

int main()
{
    int na;

    printf("请输入一个整数：");
    scanf("%d", &na);

    printf("%d的四次幂是%d", na, pow4(na));

    return 0;
}
