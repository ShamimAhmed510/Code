
#include <bits/stdc++.h>
using namespace std;
// https://www.spoj.com/problems/COMDIV/
// Function to count number of divisors of a number

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++; // i is a divisor
            if (i != n / i) cnt++; // n/i is also a divisor (avoid double count for perfect square)
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;
        int g = __gcd(A, B); // gcd of A and B
        cout << countDivisors(g) << "\n"; // number of divisors of gcd
    }

    return 0;
}
