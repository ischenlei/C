#include <stdio.h>
#include <stdlib.h>
//从头开始顺次为数组个元素进行初始化（1、2、3、4、5）并显示
int main()
{
    int i;
    int vc[5] = {5,4,3,2,1};    //初始化

    for(i = 0; i < 5; i++)
        printf("vc[%d] = %d\n", i, vc[i]);

    return 0;
}
