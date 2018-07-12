#include <stdio.h>
#include <stdlib.h>
//对代码清单5-8进行修改，把数组的元素个数增加为8个
int main()
{
    int i, temp;
    int vx[8];

    for(i = 0; i < 8; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }puts("\n");

    for(i = 0; i < 4; i++)
    {
        temp = vx[i];
        vx[i] = vx[7-i];
        vx[7-i] = temp;
    }

    for(i = 0; i < 8; i++)
    {
        printf("vx[%d]=%d\n", i, vx[i]);
    }
    return 0;
}
