#include <stdio.h>
#include <stdlib.h>

//---将字符串s2添加到s1之后---
char *strcat(char *s1, const char *s2)
{
    char *tmp = s1;

    while (*s1) s1++;
    while (*s1++ = *s2++) ;
    return (tmp);
}

//---将字符串s2的前n个字符复制到s1---
char *strncat(char *s1, const char *s2, size_t n)
{
    char *tmp = s1;

    while (*s1) s1++;
    while (n--)
        if (!(*s1++ = *s2++)) break;
    *s1 = '\0';
    return (tmp);
}
