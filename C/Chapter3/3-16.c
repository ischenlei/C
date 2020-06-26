#include <stdio.h>
#include <stdlib.h>

int main()
{
    //显示输入月份所处的季节
    int month;    //月份

    printf("请输入月份：");
    scanf("%d",month);

    if(month >= 3 && month <= 5)
        puts("是春天");
    else if(month >= 6 && month <= 8)
        puts("是夏天");
    else if(month >= 9 && month <= 11)
        puts("是秋天");
    else if(month >=12 && month <= 2)
        puts("是冬天");
    else
        puts("不存在的。");

    return 0;
}
