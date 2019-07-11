#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int  n;
	while (scanf("%lld", &n) != EOF)
	{
		int sum = (n % 100000 * (n + 1) % 100000 / 2) * (n % 100000 * (n % 100000 + 1) / 2) % 10000;
		printf("%04d\n", sum);
	}
	return 0;
}
