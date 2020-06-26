#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch, cont = 0;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
        if (ch == 10)
            cont++;
    }

    printf("%d", cont);

    return 0;
}
