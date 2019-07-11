#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, n, floor;
	long long int a[40];
	a[1] = 1;
	a[2] = 2;
	for (i = 3; i < 40; i++)
		a[i] = a[i - 1] + a[i - 2];
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &floor);
		printf("%lld\n", a[floor - 1]);
	}
	return 0;
}
