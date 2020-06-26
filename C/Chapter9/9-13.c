#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//---英文字符转化为大写字符---
void str_toupper(char str[])
{
    unsigned i = 0;
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}

//---英文字符转化为小写字符---
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

    printf("请输入字符串：");
    scanf("%s", str);

    str_toupper(str);
    printf("大写字母：%s\n", str);

    str_tolower(str);
    printf("小写字母：%s\n", str);

    return 0;
}
