#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n=0;
    for(i=1;i<=4;i=i+1)
        for(j=1;j<=5;j=j+1,n=n+1)//�����ۼ�������ݵĸ���
    {if(n%5==0)printf("\n");     //���������5�����ݺ���
     printf("%d\t",i*j);
    }
    printf("\n");
    return 0;
}
