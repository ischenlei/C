//以两种方式显示float类型的值
#include <stdio.h>

int main()
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	
	printf("%f can be written %e\n", aboat, aboat);
	printf("And it's %a in hexadecimal, powers of notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	
	/*
	float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);     //overflow上溢
    */
    
	return 0;
}
