#include <stdio.h>
#include <stdlib.h>

//�����100���ڵ�������5��
int main()
{
    int i, no;
    int prime[100];                          //������������������
    int prt = 0;                             //�Ѿ��õ�����������
    unsigned long counter = 0;

    prime[prt++] = 2;                         //2������
    prime[prt++] = 3;                         //3������

    for(no = 5; no <= 100; no+= 2) {
        int flag = 0;
        //�����������a,b ˳�ζ�a��b���м��㣬����b�Ľ����Ϊ�������ʽ��ֵ
        for (i = 1; counter++, prime[i] * prime [i] <= no; i++){
            counter++;
            if (no % prime[i] == 0) {
            flag = 1;
            break;
        }
            }
        if (!flag)                           //ֱ�����Ҳδ������
            prime[prt++] = no;               //��ӵ�������
    }

    for (i = 0; i < prt; i++)
        printf("%d\n", prime[i]);

    printf("�˳�����Ĵ�����%lu\n", counter);

    return 0;
}
