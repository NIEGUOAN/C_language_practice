#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	long long int high = 1, low = 0, nexthigh = 1, nextlow = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n == -1)
			break;
		else
		{
			high = 1;
			low = 0;
			nexthigh = 1;
			nextlow = 0;
			while (n--)
			{
				nextlow = high + low;
				nexthigh = 3 * high + 2 * low;
				low = nextlow;
				high = nexthigh;
			}
			printf("%lld, %lld\n", high, low);
		}
	}
	return 0;
}