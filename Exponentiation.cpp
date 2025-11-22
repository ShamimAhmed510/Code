#include <bits/stdc++.h>
using namespace std;
#define ll long long
//https://cses.fi/problemset/task/1095/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;


#define testcase int t; cin >> t; while (t--)

#define vi vector<int>
#define vll vector<ll>

#define pb push_back
#define lp(i,n) for(int i=0; i<n; i++)

#define srt(v) sort(v.begin(),v.end());
#define srtr(v) sort(v.rbegin(),v.rend());

#define gcd(a, b) __gcd(a, b);
#define lcm(a, b) ((a * b) / gcd(a, b));

ll mod =1e9+7;

ll solve(ll a,ll b)
{
    long long result=1;
    while (b>0)
    {
        if (b%2==1)
            result = (result*a) % mod;
        a = (a*a)%mod;
        b/=2;
    }
    return result;
}

int main()
{
    ll a;
    ll b;
    testcase
    {

        cin>>a>>b;
        cout << solve(a,b)<<endl;
    }
}
