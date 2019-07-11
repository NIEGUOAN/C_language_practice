#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int n, m, sum = 0, num;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%lld", &m);

		while (m--)
		{
			scanf("%lld", &num);
			sum += num;
		}
		if (n == 0)
		{
			printf("%lld\n", sum);
			sum = 0;
		}
		else
		{
			printf("%lld\n\n", sum);
			sum = 0;
		}

	}
	return 0;
}
