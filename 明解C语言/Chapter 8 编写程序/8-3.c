#include <stdio.h>
#include <stdlib.h>

#define putsa(str) (putchar('\a'), puts(str))
int main()
{
    int na;

    printf("������һ��������");
    scanf("%d", &na);

    if (na)
        putsa("���������0��");
    else
        putsa("�������0��");

    return 0;
}
