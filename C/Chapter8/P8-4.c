
///���ڳ����ж����ʾ�Ա𡢼��ڵ�ö�����ͣ�����Чʹ������

#include <stdio.h>
#include <stdlib.h>

enum sex {Man, Woman};
enum season {Spring, Summer, Automn, Winter};

enum sex select1()
{
    int temp;

    do {
        printf("��ѡ�������Ա�  0...��  1...Ů��");
        scanf("%d", &temp);
    }while (temp < Man || temp > Woman);

    return (temp);
}

enum season select2()
{
    int temp;

    do {
        printf("��ѡ�������ڵļ���  0...����  1...����  2...����  3...���죺");
        scanf("%d", &temp);
    }while (temp < Spring || temp > Winter);
}

int main()
{
    enum sex selected1;
    enum season selected2;

    switch (selected1 = select1()) {
        case Man : puts("��");       break;
        case Woman : puts("Ů");     break;
    }

    putchar('\n');

    switch (selected2 = select2()) {
        case Spring : puts("����");       break;
        case Summer : puts("����");       break;
        case Automn : puts("����");       break;
        case Winter : puts("����");       break;
    }

    return 0;
}
