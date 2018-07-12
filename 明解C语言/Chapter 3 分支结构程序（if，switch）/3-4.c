#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;

    printf("请输入一个整数：");
    scanf("%d",&no);

    if(no%2)
        puts("您输入的是奇数");
    else
        printf("您输入的是偶数");
    return 0;
}
