
//计算英语分数和数学分数中的最高分

#include <stdio.h>
#include <stdlib.h>

#define NUMBER  5
/*
//---返回元素个数为no的数组vc中的最大值---
int max_of(int vc[], int no)
{
    int i;
    int max = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] > max)
        max = vc[i];
    return (max);
}
*/
int max_of(const int vc[], int no)//const类型修饰符：禁止在函数内修改接收到的数组内容
{
    int i;
    int max = vc[0];
    for (i = 1; i < no; i++)
        if (vc[i] > max)
            max = vc[i];
    return (max);
}

int main()
{
    int i;
    int english[NUMBER], math[NUMBER];    //英语分数， 数学分数
    int max_english, max_math;            //英语最高分， 数学最高分

    printf("请输入%d名学生的成绩。\n",NUMBER);
    for (i = 0; i < NUMBER; i++){
        printf("[%d]英语：", i + 1);    scanf("%d", &english[i]);
        printf("   数学：");            scanf("%d", &math[i]);
    }

    max_english = max_of(english, NUMBER);
    max_math = max_of(math, NUMBER);

    printf("英语最高分：%3d\n", max_english);
    printf("数学最高分：%3d\n", max_math);

    return 0;
}
