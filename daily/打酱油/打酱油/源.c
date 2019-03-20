#pragma warning(disable:4996)
#include<stdio.h>
int main ()
{
	int num, n, a, b, c;
	scanf("%d", &n);
	if (n < 30)
		num = n / 10;//单买没优惠
	else if (n >= 30 && n <= 50)
		num = n / 10 + 1;//只有30和40的情况,只送一瓶
	else
	{
		a = n / 50;//买5送2的次数
		b = (n % 50) / 30;//买3送1的次数
		c = ((n % 50) % 30) / 10;//单买的次数
		num = 7 * a + 4 * b + c;
	}
	printf ("%d", num);
	return 0;
}