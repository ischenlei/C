#include <stdio.h>
#include <stdlib.h>

void xiaoming(int *height)
{
    if (*height < 180)
        *height = 180;
}

int main()
{
    int heigh1 = 175;
    int heigh2 = 180;
    int heigh3 = 190;

    xiaoming(&heigh1);

    printf("小明的身高：%d\n", heigh1);

    return 0;
}
