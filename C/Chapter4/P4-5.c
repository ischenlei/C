#include <stdio.h>
#include <stdlib.h>

int main()
{
    //使用复合符号运算符 /= 和后置递增运算符 ++   对代码清单4-3的程序进行修改
    int num,dig;
    dig = 0;

    do
    {
        printf("请输入一个非负整数:");
        scanf("%d",&num);
        if(num < 0)
            puts("请不要输入负整数");
    }while(num < 0);

    do
    {
        num /= 10;
        dig++;
    }while(num > 0);

    printf("该整数的位数为：%d",dig);
    return 0;
}
