#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//---Ӣ���ַ�ת��Ϊ��д�ַ�---
void str_toupper(char str[])
{
    unsigned i = 0;
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}

//---Ӣ���ַ�ת��ΪСд�ַ�---
void str_tolower(char str[])
{
    unsigned i = 0;
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }
}

int main()
{
    char str[100];

    printf("�������ַ�����");
    scanf("%s", str);

    str_toupper(str);
    printf("��д��ĸ��%s\n", str);

    str_tolower(str);
    printf("Сд��ĸ��%s\n", str);

    return 0;
}
