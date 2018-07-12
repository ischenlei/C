
//计算最高分

#include <stdio.h>
#include <stdlib.h>

#define NUMBER  5

int tensu[NUMBER]; //定义声明

int top(void);     //[声明函数类型]

int main()
{
    extern int tensu[];//非定义声明
    int i;

    printf("请输入%d名学生的成绩：\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%d:", i + 1);
        scanf("%d", &tensu[i]);
    }
    printf("最高分=%d\n", top());

    return 0;
}

//---返回数组tensu的最大值---
int top(void)
{
    extern int tensu[];
    int i;
    int max = tensu[0];
    for (i = 0; i < NUMBER; i++) {
        if (tensu[i] > max)
            max = tensu[i];
    }
    return (max);
}
