#include <stdio.h>
#include <stdlib.h>
#define NUMBER 5   //学生人数
//输入5名学生的分数并显示出他们的总分和平均分
int main()
{
    int i;
    int tensu[NUMBER];   //学生的分数
    int sum = 0;

    puts("请输入学生的分数。");
    for(i = 0; i < NUMBER; i++)
    {
        printf("%d号:", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("总  分：%5d\n", sum);
    printf("平均分：%5.1f", (double)sum / NUMBER);

    return 0;
}
