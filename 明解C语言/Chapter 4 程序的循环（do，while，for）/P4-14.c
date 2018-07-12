#include <stdio.h>
#include <stdlib.h>
//编写一段程序，显示身高和标准体重的对照表
int main()
{
    //定义四个整型变量
    int starnum, overnum, blanknum, hight;  //开始数值，结束数值，间隔数值，身高
    //定义一个double型变量存放体重计算结果
    double standweight;                     //标准体重

    printf("开始数值(cm)：");    scanf("%d", &starnum);
    printf("结束数值(cm)：");    scanf("%d", &overnum);
    printf("间隔数值(cm)：");    scanf("%d", &blanknum);


    for(hight = starnum; hight <= overnum; hight = hight + blanknum)
    {
        standweight = (hight - 100) * 0.9;
        printf("%dcm\t%.2lfkg\n", hight, standweight);
    }

    return 0;
}

