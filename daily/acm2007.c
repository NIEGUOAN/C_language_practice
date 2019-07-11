#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num,num1, num2, sumj = 0, sumo = 0;
	while (scanf("%d %d", &num1, &num2) != EOF)
	{
		if (num1 > num2)
		{
			num = num2;
			num2 = num1;
			num1 = num;
		}
		for (int i = num1; i <= num2; i++)
		{
			if (i % 2 == 0)
				sumo += i * i;
			else
				sumj += i * i * i;
		}
		printf("%d %d\n", sumo, sumj);
		sumo = 0;
		sumj = 0;
	}
	return 0;
}