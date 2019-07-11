#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int gcd(int a, int b)
{
	while (b ^= a ^= b ^= a %= b);
	return a;
}

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a * b / gcd(a, b));
	return 0;
}
