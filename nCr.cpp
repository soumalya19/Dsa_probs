#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    int ans = fact_n / (fact_r * fact_n_r);

    cout<<"Number of combinataions are "<<endl<<ans;

}

int main()
{
    int n;
    cout << "Enter Value of n ";
    cin >> n;
    int r;
    cout << "Enter Value of r ";
    cin >> r;



     nCr(n, r);

    return 0;
}