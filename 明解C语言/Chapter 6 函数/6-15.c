
//˳����ң��ڱ����ҷ���

#include <stdio.h>
#include <stdlib.h>

#define NUMBER 5
#define FALLED -1
/*
//---ͨ���ڱ����ҷ�˳�����---
int search(int vc[], int key, int no)
{
    int i = 0;
    vc[no] = key;//����ڱ�

    while (1){
        if (vc[i] == key)
            break;
        i++;
    }
    return (i == no ? FALLED : i);
}
*/

int search(int vc[], int key, int no)
{
    int i;
    vc[no] = key;

    for (i = 0; vc[i] != no; i++)
        ;

    return (i == no ? FALLED : i);
}

int main()
{
    int i, ky, idx;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++){
        printf("vx[%d]=", i);
        scanf("%d", &vx[i]);
    }
    printf("Ҫ���ҵ�ֵ��");
    scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);

    if (idx == FALLED)
        puts("����ʧ��");
    else
        printf("%d������ĵ�%d��Ԫ�ء�\n", ky, idx + 1);

    return 0;
}
