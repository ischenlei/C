#include <stdio.h>
#include <stdlib.h>

//�����100���ڵ�������4��
int main()
{
    int i, no;
    int prime[100];                    //������������������
    int ptr = 0;                       //�Ѿ��õ�����������
    unsigned long counter = 0;

    prime[ptr++] = 2;
    prime[ptr++] = 3;

    for (no = 5; no <= 100; no += 2){
        for (i = 1; i < ptr; i++){
            counter++;
            if (no % prime[i] == 0)
                break;
        }
        if (ptr == i)                  //ֱ�����Ҳδ������
            prime[ptr++] = no;
    }

    for (i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);

    printf("�˳�����Ĵ����ǣ�%lu\n", counter);

    return 0;
}
