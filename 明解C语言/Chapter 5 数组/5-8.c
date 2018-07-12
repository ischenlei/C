#include <stdio.h>
#include <stdlib.h>
//对数组中的全部元素进行倒序排列
int main()
{
    int i;
    int vx[5];


    for(i = 0; i < 5; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }puts("\n");

    for(i = 0; i < 2; i++)
    {
        int temp = vx[i];    //把vx[i]的值保存到temp中
        vx[i] = vx[4-i];     //把vx[4-i]的值赋给vx[i]
        vx[4-i] = temp;      //把temp中保存的值赋给vx[4-i]
    }

    for(i = 0; i < 5; i++)
        printf("vx[%d]=%d\n", i, vx[i]);

    return 0;
}
