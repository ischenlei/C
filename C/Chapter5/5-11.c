#include <stdio.h>
#include <stdlib.h>
#define NUMBER  5             //学生人数
//输入5名学生的分数并显示出其中的最高分和最低分
int main()
{
    int i;
    int tensu[NUMBER];        //学生的分数
    int max, min;             //最高分，最低分

    puts("请输入学生的分数。");
    for(i = 0; i < NUMBER; i++)
    {
        printf("%d号：", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];      //同时把tensu[0]的结果赋给min、max
    for(i = 1; i < NUMBER; i++)
    {
        if(tensu[i] > max)   max = tensu[i];
        if(tensu[i] < min)   min = tensu[i];
    }

    printf("最高分：%d\n", max);
    printf("最低分：%d\n", min);

    return 0;
}
