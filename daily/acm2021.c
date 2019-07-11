#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	int n, money, sum = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		else
		{
			while (n--)
			{
				scanf("%d", &money);
				int one = money % 10;
				int ten = (money % 100 - money % 10) / 10;

				if (one == 1 || one == 2 || one == 5)
					sum = sum + 1;
				if (one == 3 || one == 4 || one == 6 || one == 7)
					sum = sum + 2;
				if (one == 8 || one == 9)
					sum = sum + 3;

				if (ten == 1 || ten == 5)
					sum = sum + 1;
				if (ten == 2 || ten == 6)
					sum = sum + 2;
				if (ten == 3 || ten == 7)
					sum = sum + 3;
				if (ten == 4 || ten == 8)
					sum = sum + 4;
				if (ten == 9)
					sum = sum + 5;

				sum = sum + money / 100;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}