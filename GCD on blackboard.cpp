#include <bits/stdc++.h>
using namespace std;
#define ll long long
// https://atcoder.jp/contests/abc125/tasks/abc125_c

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

#define testcases int t; cin >> t; while (t--)
#define endl '\n'

#define vi vector<int>
#define vll vector<ll>

#define pb push_back
#define lp(i,n) for(int i=0; i<n; i++)

#define srt(v) sort(v.begin(),v.end());
#define srtr(v) sort(v.rbegin(),v.rend());

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

int main()
{
    optimize();

    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    vector<ll> pre(n), suf(n);

    pre[0] = v[0];
    for (int i = 1; i < n; i++)
        pre[i] = __gcd(pre[i-1], v[i]);

    suf[n-1] = v[n-1];
    for (int i = n - 2; i >= 0; i--)
        suf[i] = __gcd(suf[i+1], v[i]);

    ll ans = max(pre[n-2], suf[1]); // handle edge case when removing one element

    for (int i = 1; i + 1 < n; i++)
        ans = max(ans, __gcd(pre[i-1], suf[i+1]));

    cout << ans << endl;
}

