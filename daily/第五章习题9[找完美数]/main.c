#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,s,i;
    for(m=2; m<1000; m++)
    {
        s=0;
        for(i=1; i<m; i++)
            if((m%i)==0)
                s=s+i;//iΪm����ʽ,��6����ʽΪ1,2,3,6
        if(s==m)//��������
        {
            printf("%d,its factors are",m);
            for(i=1; i<m; i++)
                if(m%i==0)
                    printf("%d ",i);//���������ʽ
            printf("\n");
        }
    }
    return 0;
}
