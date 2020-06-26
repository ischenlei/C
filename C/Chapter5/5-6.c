#include <stdio.h>
#include <stdlib.h>
//把数组中的全部元素复制到另一个数组中
int main()
{
    int i;
    int va[5] = {20,30,40};
    int vb[5];

    puts(" va vb");
    puts(" -----");

    for(i = 0; i < 5; i++)
    {
        vb[i] = va[i];
        printf("%3d%3d\n", va[i], vb[i]);
    }

    return 0;
}
