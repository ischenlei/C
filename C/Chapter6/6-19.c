
//自动存储期和静态存储期

#include <stdio.h>
#include <stdlib.h>

int fx = 0;

void func()
{
    static int sx = 0;   //静态存储期，块作用域
    int        ax = 0;   //自动存储期，块作用域

    printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main()
{
    int i;

    puts("  ax sx fx ");
    puts("-----------");
    for (i = 0; i < 10; i++)
        func();
    puts("-----------");

    return 0;
}
