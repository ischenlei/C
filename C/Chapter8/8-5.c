
///��ʾ��ѡ����Ľ���

#include <stdio.h>
#include <stdlib.h>

enum animal {Dog, Cat, Monkey, Invalid};

//---����---
void dog()
{
    puts("��������");
}

//---è��---
void cat()
{
    puts("��~����");
}

//---���---
void monkey()
{
    puts("���󣡣�");
}

//---ѡ����---
enum animal select()
{
    int temp;
    do {
        printf("0...��  1...è  2...��  3...������");
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
