#include <stdio.h>
#include <stdlib.h>
//输入一个非负整数，连续显示出该非负整数个*（循环次数可以任意指定）
int main()
{
    int cont;

    do{
        int num, i;

        do{
            printf("请输入一个整数：");
            scanf("%d", &num);
            if(num < 0)
                puts("请不要输入负整数。");
        }while(num < 0);

        for(i = 1; i <= num; i++)
            putchar('*');
        putchar('\n');

        printf("是否继续执行？【Yes...0/No...9】:");
        scanf("%d", &cont);

    }while(!cont);

    return 0;
}
