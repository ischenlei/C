#include <stdio.h>
#include <stdlib.h>
//金字塔形状的三角形
int main()
{
    int i, j;

    //外层循环控制行
    for(i = 0; i < 5; i++)
    {
        //内层循环控制列
        for(j = 0; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for(j = 0; j <= 2 * i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
