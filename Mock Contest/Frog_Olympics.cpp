#include <bits/stdc++.h>
using namespace std;

bool canReach(int n, int j1, int j2)
{
    for (int b = 0; b <= n / j2; b++)
    {
        int rem = n - b * j2;
        if (rem >= 0 && rem % j1 == 0)
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool leapy = canReach(n, 3, 4);
        bool jumpster = canReach(n, 3, 5);

        if (leapy && jumpster)
            cout << "Both\n";
        else if (leapy)
            cout << "Leapy\n";
        else if (jumpster)
            cout << "Jumpster\n";
        else
            cout << "None\n";
    }
    return 0;
}