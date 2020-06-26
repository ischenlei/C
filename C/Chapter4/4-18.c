#include <stdio.h>
#include <stdlib.h>
//显示一个直角在左下方的三角形
int main()
{
    int i, j, ln;

    printf("三角形有几层：");
    scanf("%d", &ln);

    for(i = 1; i <= ln; i++){
        for(j = 1; j <=i; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
