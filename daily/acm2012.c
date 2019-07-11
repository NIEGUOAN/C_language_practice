#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)
int prime(int n)
{
	int j;
	for (j = 2; j <= sqrt(n); j++)
		if (n % j == 0)
		{
			return 0;
		}
	return 1;
}
int main()
{
	int n, x, y;
	while (scanf("%d %d", &x, &y) != EOF)
	{
		int num = 0, ans = 0;
		if (x == 0 && y == 0)
			break;
		else
		{
			for (n = x; n <= y; n++)
			{
				num = n * n + n + 41;
				if (prime(num) == 1)//是素数
					ans = 1;
				else
				{//有一个不是就结束并是ans(答案answer)为0
					ans = 0;
					break;
				}
			}
			if (ans == 1)//全是素数
				printf("OK\n");
			else//至少有一个不是素数
				printf("Sorry\n");
		}
	}
	return 0;
}
