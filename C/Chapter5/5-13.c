#include <stdio.h>
#include <stdlib.h>
//输入学生的分数并显示出分布情况
#define NUMBER 80    //人数上限
int main()
{
    int i, j;
    int num;             //实际人数
    int tensu[NUMBER];   //输入的学生分数
    int bunpu[11] = {0}; //分布图

    printf("请输入学生人数:");
    do
    {
        scanf("%d", &num);
        if(num < 1 || num > NUMBER)
            printf("人数范围[1到%d]:", NUMBER);
    }while(num < 1 || num > 80);

    puts("请输入学生分数:");
    for(i = 0; i < num; i++)
    {
        printf("%2d号：", i + 1);
        do
        {
            scanf("%d", &tensu[i]);
            if(tensu[i] < 0 || tensu[i] > 100)
                printf("分数范围[0到100]:");
        }while(tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    puts("--分布图--");
    printf("  100  :");
    for(j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');

    for(i =9; i >= 0; i--)
    {
        printf("%3d-%2d:", i*10, i * 10 + 9);
        for(j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
