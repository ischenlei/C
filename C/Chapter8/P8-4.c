
///请在程序中定义表示性别、季节等枚举类型，并有效使用它们

#include <stdio.h>
#include <stdlib.h>

enum sex {Man, Woman};
enum season {Spring, Summer, Automn, Winter};

enum sex select1()
{
    int temp;

    do {
        printf("请选择您的性别  0...男  1...女：");
        scanf("%d", &temp);
    }while (temp < Man || temp > Woman);

    return (temp);
}

enum season select2()
{
    int temp;

    do {
        printf("请选择您所在的季节  0...春天  1...夏天  2...秋天  3...冬天：");
        scanf("%d", &temp);
    }while (temp < Spring || temp > Winter);
}

int main()
{
    enum sex selected1;
    enum season selected2;

    switch (selected1 = select1()) {
        case Man : puts("男");       break;
        case Woman : puts("女");     break;
    }

    putchar('\n');

    switch (selected2 = select2()) {
        case Spring : puts("春天");       break;
        case Summer : puts("夏天");       break;
        case Automn : puts("秋天");       break;
        case Winter : puts("冬天");       break;
    }

    return 0;
}
