#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    puts("请输入两个整数。");
    printf("整数A：");            scanf("%d",&n1);
    printf("整数B：");            scanf("%d",&n2);

    printf("它们的差是：%d",(n1 > n2) ? n1 - n2 : n2 - n1);

    return 0;
}
