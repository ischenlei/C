#include <stdio.h>
#include <stdlib.h>
//�������е�ȫ��Ԫ�ؽ��е�������
int main()
{
    int i;
    int vx[5];


    for(i = 0; i < 5; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }puts("\n");

    for(i = 0; i < 2; i++)
    {
        int temp = vx[i];    //��vx[i]��ֵ���浽temp��
        vx[i] = vx[4-i];     //��vx[4-i]��ֵ����vx[i]
        vx[4-i] = temp;      //��temp�б����ֵ����vx[4-i]
    }

    for(i = 0; i < 5; i++)
        printf("vx[%d]=%d\n", i, vx[i]);

    return 0;
}
