#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, days;
	long long int pig[20];
	pig[1] = 1;
	pig[2] = 2;
	scanf("%d", &n);
	for (int i = 3; i < 20; i++)
		pig[i] = pig[i - 1] + pig[i - 2];
	while (n--)
	{
		scanf("%d", &days);
		printf("%lld\n", pig[days]);
	}
	return 0;
}
