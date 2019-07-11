#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n;
	long long int a[51];
	a[1] = 1;
	a[2] = 2;
	for (int i =3 ; i <= 50; i++)
		a[i] = a[i - 1] + a[i - 2];
	while (scanf("%d", &n)!=EOF)
		printf("%lld\n", a[n]);
	return 0;
}
