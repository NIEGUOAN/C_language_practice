#include <stdio.h>
int main()
{
    int t;
    while(
        scanf("%d",&t)!=EOF)
    {
        if(t<0||t>100)
        {
            printf("Score is error!\n");
            continue;
        }
        switch(t/10)
        {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("E\n");
            break;
        }
    }
    return 0;
}