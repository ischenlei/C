#include <stdio.h>
#include <stdlib.h>

void str_dcount(const char str[], int cnt[])
{
    unsigned i = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            cnt[str[i] - '0']++;
        i++;
    }
}


int main()
{
    int i;
    char str[100];
    int dcnt[10] = {0};

    printf("�������ַ�����");
    scanf("%s", str);

    str_dcount(str, dcnt);

    puts("�����ַ����ֵĴ���");
    for (i = 0; i < 10; i++)
        printf("'%d'��%d\n", i, dcnt[i]);

    return 0;
}
