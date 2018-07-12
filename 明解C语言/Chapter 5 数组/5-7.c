#include <stdio.h>
#include <stdlib.h>
//输入数组元素的值并显示
int main()
{
    int i;
    int vx[5];

    for(i = 0; i < 5; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }

    for(i = 0; i < 5; i++)
        printf("vx[%d] = %d\n", i, vx[i]);

    return 0;
}
