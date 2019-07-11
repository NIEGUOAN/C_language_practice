#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable:4996)

int main()
{
	int c, n;
	scanf("%d", &c);
	while (c--)
	{
		int two = 0, three = 1, temptwo = 0, tempthree = 1, sum = 0;
		scanf("%d", &n);
		for(int i=1;i<=n-1;i++)
		{
			two = tempthree * 2+temptwo;
			three = temptwo + tempthree;
			temptwo = two;
			tempthree = three;
		}
		sum = sum + two * 2 + three * 3;
		printf("%d\n", sum);
	}
	return 0;
}
//two代表两种选择的个数，three代表三种选择的个数
//two有左上，右上，three只有左上右,2种后面就是2种加3种,3种后面就是2种加2种加3种;
//即for循环里面的公式递推，用temp___保留
//第一步：左上右三种选择,0个2种,1个3种;0*2+1*3=3;
//第二步：与第一部有关,第一部选左右便有两种,选上便有三种,2个2种,1个3种,2*2+1*3=7;
//第三步:类推,4个2种,3个3种,4*2+3*3=17;
//第四步:同理,10个2种,7个3种,10*2+7*3=41;
//第五步:一样，24个2种,17个3种24*2+17*3=99;
