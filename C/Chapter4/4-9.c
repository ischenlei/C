#include <stdio.h>
#include <stdlib.h>
//递增显示从0到输入的正整数为止的各个整数
int main()
{
    int i,no;
    i = 0;

    printf("请输入一个整数:");
    scanf("%d",&no);

    while(i <= no)
        printf("%d ", i++);     //i的值在显示之后递增
     putchar('\n');

    return 0;
}
