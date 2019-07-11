#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

long long int combination(long long int a, long long int b)//组合数函数	
{
	long long int all = a, choose = b;
	if (all < choose)
		return 0;
	if (choose == 0 || all == choose)
		return 1;
	long long int num;
	for (long long int i = 2, j = all - 1; i <= choose; i++, j--)
		all = all * j / i;
	num = all;
	return num;
}

int main()
{
	int t;
	long long int n, m;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld %lld", &n, &m);
		printf("%lld\n", combination(n, m));
	}
	return 0;
}