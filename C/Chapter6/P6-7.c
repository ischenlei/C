
//����һ������������Ԫ�ظ���Ϊno��int������vc�е���Сֵ

#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5
int min_of(const int vc[], int no)
{
    int i;
    int min = vc[0];
    for (i = 0; i < no; i++){
        if (min > vc[i])
            min = vc [i];
    }
    return (min);
}

int main()
{
    int i;
    int va[NUMBER];

    printf("������%d������\n", NUMBER);
    for (i = 1; i <= NUMBER; i++) {
        printf("%d��", i);    scanf("%d", &va[i]);
    }

    printf("��Сֵ��%d", min_of(va, NUMBER));

    return 0;
}
