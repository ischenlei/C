
///��ʹ�õݹ飬ʹ�䷵������n�Ľ׳�

#include <stdio.h>
#include <stdlib.h>


//---���ؽ׳˵�ֵ---
int fact(int n)
{
    int sum = 0;

    for ( ; n > 0; n = n - 2)
        sum += n * (n - 1);

    return (sum);
}


int main()
{
    int num;

    printf("������һ������");
    scanf("%d", &num);

    printf("�����Ľ׳��ǣ�%d", fact(num));

    return 0;
}
