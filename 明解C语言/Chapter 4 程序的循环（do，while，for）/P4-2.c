#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,dig,sum;

    printf("请输入一个非负整数");
    scanf("%d",&num);
    sum = num;
    do
    {
        if(num < 0)
            puts("请不要输入负数");
    }while(num < 0);


    do
    {
        num = num / 10;
        dig = dig + 1;
    }while(num > 0);
    printf("%d的位数是%d",sum,dig);

    return 0;
}
