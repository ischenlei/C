
///������Լ��

#include <stdio.h>
#include <stdlib.h>

//---����vx��vy�����Լ��(vx >= vy)---
int gcdf(int vx, int vy)
{
    return (vy == 0 ? vx : gcdf(vy, vx % vy));
}

//---���va��vb�����Լ��---
int gcd(int va, int vb)
{
    return (va > vb ? gcdf(va,vb) : gcdf(vb, va));
}

int main()
{
    int n1, n2;

    puts("����������������");
    printf("����1��");    scanf("%d", &n1);
    printf("����2��");    scanf("%d", &n2);

    printf("���Լ���ǣ�%d", gcd(n1, n2));

    return 0;
}
