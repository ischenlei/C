
//ʹ��6-3�е�sqr����������һ�������� ����int�������Ĵ���
#include <stdio.h>
#include <stdlib.h>

//----����ƽ��---
int sqr(int x)
{
    return (x * x);
}

//---�����Ĵη�---
int pow4(int x)
{
    return (sqr(sqr(x)));
}

int main()
{
    int na;

    printf("������һ��������");
    scanf("%d", &na);

    printf("%d���Ĵ�����%d", na, pow4(na));

    return 0;
}
