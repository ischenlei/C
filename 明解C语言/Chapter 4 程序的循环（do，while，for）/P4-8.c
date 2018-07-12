#include <stdio.h>
#include <stdlib.h>
//从1开始递增  输入的小于0的时候不换行
int main()
{
    int i,no;
    i = 1 ;

    printf("请输入一个正整数:");
        scanf("%d",&no);

    while(i <= no)
        printf("%d ", i++);     //i的值在显示之后递增

    return 0;
}
