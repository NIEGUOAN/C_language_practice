#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	long long int a[40];
	a[1] = 3;
	a[2] = 8;
	for (int i = 3; i < 40; i++)
		a[i] = 2 * a[i - 1] + 2 * a[i - 2];
	while (scanf("%d", &n)!=EOF)
		printf("%lld\n", a[n]);
	return 0;
}
