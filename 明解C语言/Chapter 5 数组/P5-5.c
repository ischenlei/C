#include <stdio.h>
#include <stdlib.h>
//�Դ����嵥5-8�����޸ģ��������Ԫ�ظ�������Ϊ8��
int main()
{
    int i, temp;
    int vx[8];

    for(i = 0; i < 8; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }puts("\n");

    for(i = 0; i < 4; i++)
    {
        temp = vx[i];
        vx[i] = vx[7-i];
        vx[7-i] = temp;
    }

    for(i = 0; i < 8; i++)
    {
        printf("vx[%d]=%d\n", i, vx[i]);
    }
    return 0;
}
