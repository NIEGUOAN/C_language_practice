#include<stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int prime(n)
{
	int j, flag=-1;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			flag = 0;
			break;
		}
		else
			flag = 1;
	}
	return flag;
}

int main()
{
	int i = 0;
	int n;
	scanf("%d", &n);
	while (i <= 250 && n != 0)
	{
		i++;
		if (n == 1 || n == 2)
			printf("%d: no\n", i);
		else if (n == 3)
			printf("%d: yes\n", i);
		else if (prime(n) == 1)
			printf("%d: yes\n", i);
		else if (prime(n) == 0)
			printf("%d: no\n", i);
		scanf("%d", &n);
	}
	return 0;
}