#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{
	int t;
	int n;
	double height;
	double max = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		while (n--)
		{
			scanf("%lf", &height);
			if (height > max)
				max = height;
		}
		printf("%.2lf\n", max);
		max = 0;
	}
	return 0;
}
