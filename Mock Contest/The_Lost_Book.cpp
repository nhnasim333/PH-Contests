#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tar;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> tar;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == tar)
        {
            idx = i;
            break;
        }
    }
    cout << idx << endl;
    return 0;
}