#pragma warning(disable:4996)
#include<stdio.h>
int main ()
{
	int num, n, a, b, c;
	scanf("%d", &n);
	if (n < 30)
		num = n / 10;//����û�Ż�
	else if (n >= 30 && n <= 50)
		num = n / 10 + 1;//ֻ��30��40�����,ֻ��һƿ
	else
	{
		a = n / 50;//��5��2�Ĵ���
		b = (n % 50) / 30;//��3��1�Ĵ���
		c = ((n % 50) % 30) / 10;//����Ĵ���
		num = 7 * a + 4 * b + c;
	}
	printf ("%d", num);
	return 0;
}