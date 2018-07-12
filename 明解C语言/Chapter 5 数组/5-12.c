#include <stdio.h>
#include <stdlib.h>
//输入5名学生的分数并显示出60分以上学生的一览表
#define NUMBER  5        //学生人数
int main()
{
    int i;
    int snum = 0;                //及格学生人数
    int tensu[NUMBER];           //NUMBER名学生分数
    int succs[NUMBER];           //及格学生一览表（保存及格学生的下标）

    puts("请输入学生分数");
    for(i = 0; i < NUMBER; i++)
    {
        printf("%2d号:", i + 1);
        scanf("%d", &tensu[i]);
        if(tensu[i] >= 60)
            succs[snum++] = i;   //添加到及格学生一览表中
    }

    puts("及格学生一览表");
    puts("--------------");

    for(i = 0; i < snum; i++)
        printf("%2d号(%3d分)\n",succs[i] + 1, tensu[succs[i]]);

    return 0;
}
