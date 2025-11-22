#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://cses.fi/alon/task/1079

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
#include <bits/stdc++.h>
using namespace std;




ll mod=1e9+7;
ll bigmod(ll a,int b)
{
    if(b==0)return 1;
    if(b%2==1)
    {
        return (a%mod*bigmod(a,b-1)%mod)%mod;
    }
    ll tmp=bigmod(a,b/2)%mod;
    return (tmp*tmp)%mod;
}

int main()
{


    ll n=1e6+2;
    vector<ll>fact(n);
    fact[0]=1;
    for(ll i=1; i<n; i++)
    {
        fact[i]=(fact[i-1]%mod*i%mod)%mod;
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        ll x=fact[a];
        ll y=fact[b];
        ll z=fact[a-b];
        ll ans=(x%mod*(bigmod(y,mod-2)%mod))%mod;
        ans=(ans%mod*(bigmod(z,mod-2)%mod))%mod;
        cout<<ans<<'\n';
    }
}
