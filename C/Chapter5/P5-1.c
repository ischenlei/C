#include <stdio.h>
#include <stdlib.h>
//�Դ����嵥5-3�����޸ģ���ͷ˳��Ϊ�����е�Ԫ�ظ�ֵ0��1��2��3��4
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
