
///��ʾEOF�������ַ���ֵ

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("  EOF = %d\n", EOF);

    for (i = 0; i < 10; i++)
        printf("��%d�� = %d\n", i, '0' + i);

    return 0;
}