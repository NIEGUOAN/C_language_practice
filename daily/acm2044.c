#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	int a, b;
	long long int mi[50];
	mi[1] = 1;
	mi[2] = 2;
	for (int i = 3; i < 50; i++)
		mi[i] = mi[i - 1] + mi[i - 2];
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &a, &b);
		printf("%lld\n", mi[b - a]);
	}
	return 0;
}
