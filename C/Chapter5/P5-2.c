#include <stdio.h>
#include <stdlib.h>
//�Դ����嵥5-3�еĳ�������޸ģ���ͷ˳��Ϊ�����е�Ԫ�ظ�ֵ5��4��3��2��1��
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
