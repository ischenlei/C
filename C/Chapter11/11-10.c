#include <stdio.h>
#include <stdlib.h>

//---���ַ���s2���Ƶ�s1---
char *strcpy(char *s1, const char *s2)
{
    char *tmp = s1;
    while (*s1++ = *s2++)
        ;
    return (tmp);
}

//---���ַ���s2��ǰn���ַ����Ƶ�s1---
char *strncpy(char *s1, const char *s2, size_t n)
{
    char *tmp = s1;

    while (n) {
        if (!(*s1++ = *s2++)) break;    //����0�ͽ���ѭ��
        n--;
    }
    while (n--) *s1++ = '\0';           //��'\0'���ʣ�ಿ��
    return (tmp);
}