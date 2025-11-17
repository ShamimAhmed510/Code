#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    ll k;
    cin >> n >> m >> k;

    vector<ll> v(n), b(m);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(v.begin(), v.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, ans = 0;

    while (i < n && j < m)
    {
        if (abs(v[i] - b[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else if (b[j] < v[i] - k)
        {
            j++; // b[j] too small
        }
        else
        {
            i++; // b[j] too big
        }
    }

    cout << ans << "\n";
    return 0;
}
