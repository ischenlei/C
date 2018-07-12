#include <stdio.h>
#include <stdlib.h>
//将数组的全部元素赋值为（0.0）并显示
int main()
{
    int i;
    double vc[5];

    for(i = 0; i < 5; i++)
        vc[i] = 0.0;

    for(i = 0; i < 5; i++)
        printf("vc[%d] = %.1f\n", i, vc[i]);

    return 0;
}
