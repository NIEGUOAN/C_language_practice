#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int page = 1, n,i,last,now;
	scanf("%d", &n);
	scanf("%d", &now);
	last = now;
	for (i = 1; i < n; i++)
	{
		scanf("%d", &now);
		if (now == last)
			continue;
		else
			page = page + 1;
		last = now;
	}
	printf("%d", page);
	return 0;
}

/*
����page=0Ϊ������,nΪ��������
������������n
������������
������һ�������ж��Ƿ��ǰ���������
�������,��page=page+1;�����������
���pageֵ
*/