#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	long long int f[51];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 50; i++)
		f[i] = f[i - 1] + f[i - 2];
	while (scanf("%d", &n) != EOF)
	{
		if (n == -1)
			break;
		else
		{
			printf("%lld\n", f[n]);
		}
	}
	return 0;
}
