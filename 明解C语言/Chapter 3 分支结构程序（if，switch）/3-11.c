#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max;

    printf("整数A：");        scanf("%d",&n1);
    printf("整数B：");        scanf("%d",&n2);
    printf("整数C：");        scanf("%d",&n3);

    max = n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;

    printf("最大值是：%d",max);
    return 0;
}
