#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "12345";

    printf("%s\n", str);
    printf("%3s\n", str);
    printf("%.3s\n", str);
    printf("%8s\n", str);
    printf("%-8s\n", str);

    return 0;
}
