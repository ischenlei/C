#include <stdio.h>
#include <stdlib.h>
//��ʾһ��ֱ�������·���������
int main()
{
    int i, j, ln;

    printf("�������м��㣺");
    scanf("%d", &ln);

    for(i = 1; i <= ln; i++){
        for(j = 1; j <=i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
