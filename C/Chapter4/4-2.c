#include <stdio.h>
#include <stdlib.h>

int main()
{
    //逆向显示输入的非负整数
    int num;

    do
    {
        printf("请输入一个非负整数：");
        scanf("%d",&num);

        if(num < 0)
            puts("请不要输入负整数");
    }while(num < 0);

    printf("该整数逆向显示的结果是");
    do
    {
        printf("%d",num % 10);           //显示最后一位数
        num = num / 10;                  //右移一位
    }while(num > 0);
    puts("。");

    return 0;
}
