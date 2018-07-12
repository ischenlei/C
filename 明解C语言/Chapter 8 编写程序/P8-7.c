
///计算标准输入流中出现的数

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, ch;
    int cnt[10] = {0};

    while (1) {
        ch = getchar();
        if (ch == EOF)  break;

        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;
    }

    puts("数字字符出现的次数。");
    for (i = 0; i < 10; i++){
        printf("‘%d’：", i);
        for (j = 0; j < cnt[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
