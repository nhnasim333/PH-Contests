#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    vector<int> pre0(n + 1, 0), pre1(n + 1, 0), pre2(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        pre0[i] = pre0[i - 1] + (a[i] == 0);
        pre1[i] = pre1[i - 1] + (a[i] == 1);
        pre2[i] = pre2[i - 1] + (a[i] == 2);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int c0 = pre0[r] - pre0[l - 1];
        int c1 = pre1[r] - pre1[l - 1];
        int c2 = pre2[r] - pre2[l - 1];

        if (c0 == 0)
            cout << 0 << "\n";
        else if (c1 == 0)
            cout << 1 << "\n";
        else if (c2 == 0)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }
    return 0;
}