#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	__int64 a, b, c;
	while (scanf("%I64X %I64X", &a, &b) != EOF)
	{
		c = a + b;
		if (c >= 0)
			printf("%I64X\n", c);
		else
			printf("-%I64X\n", -c);
	}
	return 0;
}
