#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int a,b;
	while (scanf("%lld %lld",&a,&b) != EOF)
	{
		if (a % 10 == 0 || a % 10 == 1 || a % 10 == 5 || a % 10 == 6)
		{
			printf("%lld", a % 10);
		}
		else if (a % 10 == 4)
		{
			if (b % 2 == 1)
				printf("4");
			else
				printf("6");
		}
		else if (a % 10 == 9)
		{
			if (b % 2 == 1)
				printf("9");
			else
				printf("1");
		}
		else if (a % 10 == 2)
		{
			if (b % 4 == 1)
				printf("2");
			if (b % 4 == 2)
				printf("4");
	        if (b % 4 == 3)
				printf("8");
			if (b % 4 == 0)
				printf("6");
		}
		else if (a % 10 == 3)
		{
			if (b % 4 == 1)
				printf("3");
			if (b % 4 == 2)
				printf("9");
			if (b % 4 == 3)
				printf("7");
			if (b % 4 == 0)
				printf("1");
		}
		else if (a % 10 == 7)
		{
			if (b % 4 == 1)
				printf("7");
			if (b % 4 == 2)
				printf("9");
			if (b % 4 == 3)
				printf("3");
			if (b % 4 == 0)
				printf("1");
		}
		else if (a % 10 == 8)
		{
			if (b % 4 == 1)
				printf("8");
			if (b % 4 == 2)
				printf("4");
		    if (b % 4 == 3)
				printf("2");
			if (b % 4 == 0)
				printf("6");
		}
		printf("\n");
	}
	return 0;
}
