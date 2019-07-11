#include<iostream>
#include<cstdio>
using namespace std;
long long int combination(long long int all,long long int choose) 
{
    if (all < choose)
        return 0;
    if (choose == 0)
        return 1;
    for (long long int i = 2, j = all - 1; i <= choose; i++, j--)
        all = all * j / i;
    return all;
}

int main()
{
    long long int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << combination(n, m) << endl;
    }
    return 0;
}