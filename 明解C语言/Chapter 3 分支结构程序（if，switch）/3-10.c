#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,max;

    puts("请输入两个整数。");
    printf("整数A：");        scanf("%d",&n1);
    printf("整数B：");        scanf("%d",&n2);

    if(n1>n2) max=n1;
        else max=n2;

    printf("较大的数是：%d",max);
    return 0;
}
