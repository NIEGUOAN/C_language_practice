#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, num, sum = 0;
	while (scanf("%d\n", &n) != EOF)
	{
		while (n--)
		{
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
