
//����һ����������Ԫ�ظ���Ϊno��int��������vc���е������У������������浽����v1��

#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5

void intary_rcpy (int v1[], const int v2[], int no)
{
    int i;
    for (i = 0; i < no; i++)
        v1[i] = v2[no - 1 - i];
}

int main()
{
    int i;
    int v1[NUMBER], va[NUMBER];

    for (i = 0; i < NUMBER; i++) {
        printf("va[%d]=", i);
        scanf("%d", &va[i]);
    }
    putchar('\n');

    intary_rcpy(v1, va, NUMBER);

    for (i = 0; i < NUMBER; i++)    printf("v1[%d]=%d\n", i, v1[i]);

    return 0;
}
