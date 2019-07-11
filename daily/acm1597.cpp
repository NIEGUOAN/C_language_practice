#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

using namespace std;

int main()
{
	int k, n, i;
	cin >> k;
	while (k--)
	{
		cin >> n;
		for (i = 1; n > i; i++)//确定行数
			n = n - i;
		i = n % 9;//确定所在行的第几串1-9
		if (i == 0)
			cout << "9" << endl;
		else
			cout << i << endl;
	}
	return 0;
}