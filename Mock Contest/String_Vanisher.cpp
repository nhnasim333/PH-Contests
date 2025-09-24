#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int ops = 0;
        while (!s.empty())
        {
            string next = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (i % 2 == 0)
                    continue;
                next += s[i];
            }
            s = next;
            ops++;
        }
        cout << ops << "\n";
    }
    return 0;
}
