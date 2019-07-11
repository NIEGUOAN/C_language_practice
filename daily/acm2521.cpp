#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n, a, b, temp;
    int count, max;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        max = 0;
        for (int i = a; i <= b; i++)
        {
            count = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    count++;
            }
            if (count > max)
            {
                max = count;
                temp = i;
            }
        }
        cout << temp << endl;
    }
    return 0;
}