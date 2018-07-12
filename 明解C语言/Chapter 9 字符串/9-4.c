#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40];

    printf("请输入您的姓名：");
    scanf("%s", name);

    printf("您好，%s 先生/女士！！", name);

    return 0;
}
