#include <stdio.h>
#include <stdlib.h>
//输入规定个数个整数并显示出它们的合计值和平均值
int main()
{
    int i = 0;
    int sum = 0;       //合计值
    int num,tmp;

    printf("要输入多少个整数：");
    scanf("%d",&num);

    while(i < num)
    {
        printf("No.%d:", ++i);
        scanf("%d",&tmp);
        sum += tmp;
    }

    printf("合计值：%d\n", sum);
    printf("平均值：%.2f\n", (double)sum / num);

    return 0;
}
