#include <stdio.h>
#include <stdlib.h>
//对代码清单5-3进行修改，从头顺次为数组中的元素赋值0、1、2、3、4
int main()
{
    int i;
    int vc[5];

    for(i = 0; i < 5; i++)
    {
        vc[i] = i;
        printf("vc[%d] = %d\n", i, vc[i]);
    }


    return 0;
}
