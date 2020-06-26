#include <stdio.h>
#include <stdlib.h>
//从0递增显示到输入的正整数 代码4-9
int main()
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d",&no);

    for(i = 0; i <= no; i++)
    printf("%d",i);
    putchar('\n');

    return 0;
}
