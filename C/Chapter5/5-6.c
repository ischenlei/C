#include <stdio.h>
#include <stdlib.h>
//�������е�ȫ��Ԫ�ظ��Ƶ���һ��������
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
