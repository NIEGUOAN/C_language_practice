#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, t, i, prime[10] = { 2,3,5,7,11,13,17,19,23,29 };
	int flag = 0;
	scanf("%d", &t);
	while (t--)
	{
		flag = 0;
		scanf("%d %d", &a, &b);
		for (i = 0; i < 10; i++)
		{
			if (a / b % prime[i] != 0)
			{
				printf("%d\n", b * prime[i]);
				flag = 1;
			}
			if (flag == 1)
				break;
		}
	}
	return 0;
}
