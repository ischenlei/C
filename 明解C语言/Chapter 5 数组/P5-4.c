#include <stdio.h>
#include <stdlib.h>
//�Դ����嵥5-6�����޸ģ���������va��Ԫ�ذ��յ����Ƶ�����vb��
int main()
{
    int i, temp;
    int va[5] = {15, 20, 30};
    int vb[5];

    puts("va vb");
    puts("-----");
    for(i = 0; i < 5; i++)
       vb[i] = va[i];

    for(i = 0; i < 2; i++)
    {
       temp = vb[4 - i];
       vb[4 - i] = vb[i];
       vb[i] = temp;
    }

    for(i = 0; i < 5; i++)
       printf("%2d %2d\n", va[i], vb[i]);

    return 0;
}
