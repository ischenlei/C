//��pizza��������ʹ���Ѷ���ĳ���
#include <stdio.h>
#define PI 3.14159

int main()
{
	float area, circum, radius;
	
	printf("what is the radius of your pizza?\n");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
	
	return 0;
}
