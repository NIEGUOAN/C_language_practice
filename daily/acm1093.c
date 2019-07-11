#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, m, num,sum=0;
	scanf("%d\n", &n);
	while (n--)
	{
		scanf("%d", &m);
			while (m--)
			{
				scanf("%d", &num);
				sum += num;
			}
			printf("%d\n", sum);
			sum = 0;
	}
	return 0;
}
