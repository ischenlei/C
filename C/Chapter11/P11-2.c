#include <stdio.h>
#include <stdlib.h>

char put_str(const char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'c') {
           printf("str[%d]", i);
           break;
        }
    }

    if (str[i] == '\0') {
        printf("NULL");
    }
}

int main()
{
    char str[100];

    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%s", str);

    put_str(str);

    return 0;
}
