
///����׳�

#include <stdio.h>
#include <stdlib.h>

//---���ؽ׳˵�ֵ---
int factorial(int n)
{
    if (n > 0)
        return (n * factorial(n - 1));
    else
        return (1);
}

int main()
{
    int num;

    printf("������һ������");
    scanf("%d", &num);

    printf("�����Ľ׳��ǣ�%d", factorial(num));

    return 0;
}
