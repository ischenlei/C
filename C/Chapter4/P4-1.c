#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    do
    {
        printf("请输入一个整数：");
        scanf("%d",&num);
        if(num < 0)
            puts("请不要输入负数");
    }while(num < 0);

    printf("%d的逆向显示结果为:",num);
    do
    {
        printf("%d",num % 10);
        num = num / 10;
    }while(num > 0);
    puts("。");
    return 0;
}
