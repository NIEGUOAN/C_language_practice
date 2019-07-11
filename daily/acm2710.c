#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int prime[20001]; 
int max_prime[20001]; 

int num[20001];
int value[20001];

void is_prime()
{
	int i;
	prime[0] = 0;
	prime[1] = 0;
	for (i = 2; i * i <= 20000; i++)
	{
		if (prime[i])
		{
			int j = 2 * i;
			while (j <= 20000)
			{
				prime[j] = 0;
				j += i;
			}
		}
	}
}

void is_max_prime()
{
	int i, j;
	max_prime[0] = 0;
	max_prime[1] = 1;
	for (i = 2; i <= 20000; i++)
	{
		for (j = i; j >= 2; j--)
		{
			if (prime[j] && i % j == 0)
			{
				max_prime[i] = j;
				break;
			}
		}
	}
}

int main()
{
	int n, i;
	memset(prime, -1, sizeof(prime));
	is_prime();
	is_max_prime();
	while (scanf("%d", &n)!=EOF)
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d", &num[i]);
			value[i] = max_prime[num[i]];
		}

		int number = -1;
		int ans;
		for (i = 0; i < n; i++)
		{
			if (value[i] > number)
			{
				number = value[i];
				ans = num[i];
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}