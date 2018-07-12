#include <stdio.h>
#include <stdlib.h>

int main()
{
    //计算输入的非负整数的位数
    int num,dig;    //非负整数，位数；

    do
    {
        printf("请输入一个整数：");
        scanf("%d",&num);
        if(num < 0)
            puts("请不要输入负数");
    }while(num < 0);

    dig = 0;
    do
    {
        num = num / 10;         //右移一位
        dig = dig + 1;
    }while(num > 0);
    printf("该整数的位数为：%d",dig);

    return 0;
}
