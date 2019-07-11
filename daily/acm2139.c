#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)
long long sum[3000] = { 0 };
int main()
{
	long long int n;
	sum[1] = 1;
	for (long long int i = 3; i <= 2343; i = i + 2)
		sum[i] = sum[i-2] + i * i;
	while (scanf("%lld", &n) != EOF)
	{
		printf("%lld\n", sum[n]);
	}
	return 0;
}