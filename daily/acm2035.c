#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long int A, B, temp;
	while (scanf("%lld %lld", &A, &B) != EOF)
	{
		if (A == 0 && B == 0)
			break;
		else if ((A != 0 && B == 0) || A == 1)
			printf("1\n");
		else if (A == 0 && B != 0)
			printf("0\n");
		else if (B == 1)
			printf("%lld\n", A);
		else
		{
			if (A >= 1000)
				A = A % 1000;
			temp = A;
			for (int i = 1; i < B; i++)
			{
				A = A * temp;
				if (A >= 1000)
					A = A % 1000;
			}
			printf("%lld\n", A);
		}
	}
	return 0;
}
