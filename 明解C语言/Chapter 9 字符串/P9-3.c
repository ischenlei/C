#include <stdio.h>
#include <stdlib.h>

int str_char(const char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'c')
            return (i);
    }
    if (str[i] == '\0')
        return (-1);
}

int main()
{
    char st[100];

    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%s", st);

    printf("%d", str_char(st));

    return 0;
}
