#include <stdio.h>
#include <stdlib.h>
//输入规定个整数并显示它们的合计值和平均值（使用for语句）
int main()
{
    int i;
    int sum = 0;
    int num, tmp;

    printf("要输入多少个整数:");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
     printf("No.%d:", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }
       printf("合计值是：%d\n", sum);
       printf("平均值是：%.2f\n", (double) sum / num);

    return 0;
}
