#include <stdio.h>
#include <inttypes.h>   //支持可移植类型

int main()
{
	int32_t me32;   //me32是一个32位有符号整型变量
	
    me32 = 45933945;
    printf("me32 = %d\n", me32);
    printf("me32 = %" PRId32 "\n", me32);   //PRId32 == "d"
    
    return 0;
}
