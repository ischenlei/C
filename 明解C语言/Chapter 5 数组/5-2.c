#include <stdio.h>
#include <stdlib.h>
//依次把1、2、3、4、5赋值给数组每个元素并显示
int main()
{
    int vc[5];   //包含五个元素的数组

    vc[0] = 1;
    vc[1] = 2;
    vc[2] = 3;
    vc[3] = 4;
    vc[4] = 5;

    printf("vc[0] = %d\n", vc[0]);
    printf("vc[1] = %d\n", vc[1]);
    printf("vc[2] = %d\n", vc[2]);
    printf("vc[3] = %d\n", vc[3]);
    printf("vc[4] = %d\n", vc[4]);

    return 0;
}
