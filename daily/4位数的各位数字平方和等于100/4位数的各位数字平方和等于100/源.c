#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int i,j=0;
	int g, s, b, q;
	for (i = 1000; i <= 9999; i++)
	{
		q = i / 1000;
		b = (i % 1000) / 100;
		s = ((i % 1000) % 100) / 10;
		g = ((i % 1000) % 100) % 10;
		if (q * q + b * b + s * s + g * g == 100)
		{
			printf("%d\n", i);
			j++;
		}
	}
	printf("这样的四位数有%d个,如上", j);
	return 0;
}