#include <stdio.h>
int main()
{
    int j,n;
    char ch[80];
    printf("input cipher code:\n");
    gets(ch);
    printf("\n cipher code:%s\n",ch);
    j=0;
    while(ch[j]!='\0')
    {
        if((ch[j]>='A')&&(ch[j]<='Z'))
            ch[j]=155-ch[j];
        else if((ch[j]>='a')&&(ch[j]<='z'))
            ch[j]=219-ch[j];
        else
            ch[j]=ch[j];
        j++;
    }
    n=j;
    printf("original text:");
    for(j=0;j<n;j++)
        putchar(ch[j]);
    printf("\n");
    return 0;
}
//input cipher code:R droo erhrg Xsrmz mvcg dvvp.
//cipher code  :R droo erhrg Xsrmz mvcg dvvp.
//original text:I will visit China next week.
