#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	int n, m;
	double num, sum = 0, min = 1<<7, max = 0, average;
	while (scanf("%d", &n) != EOF)
	{
		num = 0;
		min = 1<<7;
		max = 0;
		int temp = n;
		while (n--)
		{

			scanf("%lf", &num);
			sum += num;
			if (num > max)
			{
				max = num;
			}
			if (num < min)
			{
				min = num;
			}
		}
		m = temp - 2;
		average = (sum - max - min) / m;
		printf("%.2lf\n", average);
		sum = 0;
	}
	return 0;
}
