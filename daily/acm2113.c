#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int a[10] = { 0 };
	int num, temp, i, j, sum;
	int flag = 0;
	while (scanf("%d", &num) != EOF)
	{
		if (flag)
			printf("\n");
		flag = 1;
		i = 0;
		sum = 0;
		while (num != 0)
		{
			temp = num % 10;
			num = num / 10;
			if (temp % 2 == 0)
			{
				a[i] = temp;
				i++;
			}
		}
		for (j = 0; j < i; j++)
			sum = sum + a[j];
		printf("%d\n", sum);
	}
	return 0;
}