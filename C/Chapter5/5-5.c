#include <stdio.h>
#include <stdlib.h>
//��ͷ��ʼ˳��Ϊ�����Ԫ�ؽ��г�ʼ����1��2��3��4��5������ʾ
int main()
{
    int i;
    int vc[5] = {5,4,3,2,1};    //��ʼ��

    for(i = 0; i < 5; i++)
        printf("vc[%d] = %d\n", i, vc[i]);

    return 0;
}
