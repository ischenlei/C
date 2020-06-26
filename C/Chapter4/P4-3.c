#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,num,sum,no;
    num = 0;

    printf("请输入两个整数\n");
    printf("整数1：");              scanf("%d",&n1);
    printf("整数2：");              scanf("%d",&n2);

    sum = n1;
    no  = n1;
    do
    {
        no  = no  + 1;
        sum = sum + no;
        num = num + 1;
    }while(num <= (n2 - n1 - 1));

    printf("大于等于%d小于等于%d的所有整数和是：%d",n1,n2,sum);

    return 0;
}
