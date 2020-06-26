#include <stdio.h>
#include <stdlib.h>
//对代码清单5-3中的程序进行修改，从头顺词为数组中的元素赋值5、4、3、2、1。
int main()
{
    int i;
    int num = 5;
    int vc[5];

    for(i = 0; i < 5; i++)
    {
        vc[i] = num--;
        printf("vc[%d] = %d\n", i, vc[i]);
    }

    return 0;
}
