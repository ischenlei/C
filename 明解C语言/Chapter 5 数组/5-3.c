#include <stdio.h>
#include <stdlib.h>
//���ΰ�1��2��3��4��5��ֵ������ÿ��Ԫ�ز���ʾ(ʹ��for���)
int main()
{
    int i;
    int vc[5];

    for(i = 0; i < 5; i++)
        vc[i] = i + 1;
    for(i = 0; i < 5; i++)
        printf("i[%d] = %d\n", i, vc[i]);

    return 0;
}
