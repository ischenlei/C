#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int width, height;

    puts("������������һ��������");
    printf("��");     scanf("%d", &width);
    printf("�ߣ�");     scanf("%d", &height);

    for(i = 1; i <= height; i++){
        for(j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
