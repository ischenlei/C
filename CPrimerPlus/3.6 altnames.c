#include <stdio.h>
#include <inttypes.h>   //֧�ֿ���ֲ����

int main()
{
	int32_t me32;   //me32��һ��32λ�з������ͱ���
	
    me32 = 45933945;
    printf("me32 = %d\n", me32);
    printf("me32 = %" PRId32 "\n", me32);   //PRId32 == "d"
    
    return 0;
}
