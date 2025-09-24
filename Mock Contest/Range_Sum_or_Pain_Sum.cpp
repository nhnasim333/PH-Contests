#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll prefix(ll k)
{
    if (k == 0)
        return 0;
    if (k % 2 == 0)
    {
        ll m = k / 2;
        return m * (m + 1);
    }
    else
    {
        ll m = k / 2;
        return m * (m + 1) + (m + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;
    while (q--)
    {
        ll L, R;
        cin >> L >> R;
        cout << prefix(R) - prefix(L - 1) << "\n";
    }
    return 0;
}
