#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);

    if(no>=0)
        printf("绝对值是:%d",no);
    else
        printf("绝对值是:%d",-no);

    return 0;
}
