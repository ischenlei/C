#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "ABC\0EF";

    printf("%s\n", str);

    return 0;
}
