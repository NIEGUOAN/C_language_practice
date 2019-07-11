#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{
	int t, n;
	long long int a[30] = { 0 };
	a[1] = 1;
	long long int two = 1;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 2; i <= n; i++)
		{
			a[i] = a[i - 1] * 2 + two;
			two = two * 2;
		}
		printf("%lld\n", a[n]);
		two = 1;
	}
	return 0;
}
