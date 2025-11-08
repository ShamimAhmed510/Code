#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// https://www.spoj.com/problems/ETF/

ll solve(ll n)
{

    ll result = n;

    for (ll p = 2; p * p <= n; ++p)
    {
        // Check if p is a prime factor.
        if (n % p == 0)
        {
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;

            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;

    return result;
}

int main()
{
    optimize
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        cout << solve (n)<<endl;
    }

    return 0;
}
