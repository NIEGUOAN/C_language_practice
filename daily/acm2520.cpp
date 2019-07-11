#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int a[10010];
    for(int i=1; i<=10000; i++)
        a[i]=(i*i)%10000;
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        while(n>10000)
        {
            n=n-10000;
        }
        cout<<a[n]<<endl;

    }
}