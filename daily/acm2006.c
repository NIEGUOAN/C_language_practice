#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, num, sum=1;
	while (scanf("%d", &n) != EOF)
	{
		while (n--)
		{
			scanf("%d", &num);
			if (num % 2 == 1)
				sum *= num;
		}
		printf("%d\n", sum);
		sum = 1;
	}
	return 0;
}