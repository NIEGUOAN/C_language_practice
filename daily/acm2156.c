#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		else
		{
			double temp, two, sum = 0;
			temp = (double)n;
			for (double two = 2 * temp - 2, i = 2; i <= temp; two = two - 2, i++)
				sum = sum + 1.00 / i * two;
			sum = sum + temp;
			printf("%.2lf\n", sum);
		}
	}	
	
	return 0;
}