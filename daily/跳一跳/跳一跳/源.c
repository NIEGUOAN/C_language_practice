#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n,a, score = 0, flag = 0;
	scanf("%d ", &n);
	while(n--)
	{
		scanf("%d", &a);
		if (a == 1)
		{
			score = score + 1;//δ��������
			flag = 0;
		}
		else if (a == 2 && flag == 0)
		{
			score = score + 2; //��һ���������Ļ��ϴ�δ��������
			flag = 1;
		}
		else if (a == 2 && flag >= 1) 
		{
			flag = flag + 1; 
			score = score + flag * 2; //������������,�÷�����
		}
		else 
			break;
	}
	printf("%d\n", score);
	return 0;
}