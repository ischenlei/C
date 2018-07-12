#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int width, height;

    puts("让我们来描述一个长方形");
    printf("宽：");     scanf("%d", &width);
    printf("高：");     scanf("%d", &height);

    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
