#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, no;
    unsigned long counter = 0;

    no = 2;
    printf("%d\n", no++);

    for ( ; no < 100; no += 2) {         //ֻ��������Ϊ�ж϶���
        for (i = 3; i < no; i += 2) {   //ֻ�ж��ܷ���������
            counter ++;
            if (no % i == 0)
                break;
        }
        if (no == i)
            printf("%d\n", no);
    }

    printf("�˳�����Ĵ�����%lu\n", counter);

    return 0;
}
