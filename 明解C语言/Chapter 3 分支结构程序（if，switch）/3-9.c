#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);

    if(no==0)
        puts("该整数为零。");
    else if(no>0)
        puts("该整数大于零。");
    else
        puts("该整数小于零");
    return 0;
}
