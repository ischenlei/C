#include <stdio.h>
#include <stdlib.h>
//计算并显示1到5的和（用for语句）
int main()
{
    int i;
    int sum = 0;
    int num;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("1到5的和是：%d", sum);
    return 0;
}
