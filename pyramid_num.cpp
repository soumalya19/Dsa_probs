#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
            //num = num + 1;
        }
        for (int k = i; k > 0; k--)
        {
            cout << k;
            //num++;
        }

        cout<<endl;
    }
}