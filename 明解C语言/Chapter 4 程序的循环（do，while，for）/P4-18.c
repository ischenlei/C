#include <stdio.h>
#include <stdlib.h>
//��������״��������
int main()
{
    int i, j;

    //���ѭ��������
    for(i = 0; i < 5; i++)
    {
        //�ڲ�ѭ��������
        for(j = 0; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for(j = 0; j <= 2 * i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
