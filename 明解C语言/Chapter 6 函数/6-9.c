
//������ʾ����ķǸ�����

#include <stdio.h>
#include <stdlib.h>

//---��������ķǸ�����---
int scan_uint(void)
{
    int tmp;

    do {
        printf("������һ���Ǹ�������");
        scanf("%d", &tmp);
        if (tmp < 0)
            puts("�벻Ҫ���븺����");
    }while (tmp < 0);
    return (tmp);
}

//---���طǸ�������ת���ֵ---
int rev_int(int num)
{
    int tmp = 0;

    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        }while (num > 0);
    }
    return (tmp);
}

int main()
{
    int nx = scan_uint();

    printf("��������ת���ֵ�ǣ�%d\n", rev_int(nx));

    return 0;
}
