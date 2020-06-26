#include <stdio.h>
#include <stdlib.h>

char *str_copy(char *d, char *s)
{
    char *t = d;

    while (*d++ = *s++)
        ;
    return (t);
}

int main()
{
    char s1[128] = "ABCD";
    char s2[128] = "EFGH";

    printf("×Ö·û´®s1£º");
    scanf("%s", s1);

    str_copy(s2, s1);

    puts("s1¸´ÖÆµ½ÁËs2¡£");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    return 0;
}
