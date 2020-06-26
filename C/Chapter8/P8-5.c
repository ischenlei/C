
///不使用递归，使其返回整数n的阶乘

#include <stdio.h>
#include <stdlib.h>


//---返回阶乘的值---
int fact(int n)
{
    int sum = 0;

    for ( ; n > 0; n = n - 2)
        sum += n * (n - 1);

    return (sum);
}


int main()
{
    int num;

    printf("请输入一个数：");
    scanf("%d", &num);

    printf("该数的阶乘是：%d", fact(num));

    return 0;
}
