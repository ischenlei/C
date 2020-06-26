
///显示所选动物的叫声

#include <stdio.h>
#include <stdlib.h>

enum animal {Dog, Cat, Monkey, Invalid};

//---狗叫---
void dog()
{
    puts("汪汪！！");
}

//---猫叫---
void cat()
{
    puts("喵~！！");
}

//---猴叫---
void monkey()
{
    puts("唧唧！！");
}

//---选择动物---
enum animal select()
{
    int temp;
    do {
        printf("0...狗  1...猫  2...猴  3...结束：");
        scanf("%d", &temp);
    }while (temp < Dog || temp > Invalid);
    return (temp);
}

int main()
{
    enum animal selected;

    do {
        switch (selected = select()) {
            case Dog : dog();       break;
            case Cat : cat();       break;
            case Monkey : monkey(); break;
        }
    }while (selected != Invalid);

    return 0;
}
