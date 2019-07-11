#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	long int T, A, B;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%ld %ld", &A, &B);
		if (A % B == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
