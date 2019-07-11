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
	int a, b, c, d, t, son, mcd, temp;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		mcd = d * b / gcd(b, d);//最大公约数
		a = a * mcd / b;
		c = c * mcd / d;
		son = a + c;
		temp = gcd(son, mcd);
		printf("%d %d\n", son / temp, mcd / temp);
	}
	return 0;
}
