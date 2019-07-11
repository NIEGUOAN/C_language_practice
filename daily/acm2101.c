#pragma warning(disable:4996)
#include<stdio.h>
int main()
{ 
   int A,B;
   while(scanf("%d %d",&A,&B)!=EOF)
  { 
    if((A+B)%86==0)
    printf("yes\n");
    else
    printf("no\n");
  } 
   return 0;
}