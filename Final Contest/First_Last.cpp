#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<long long, pair<int, int>> mp;

    for (int i = 0; i < n; i++)
    {
        long long val = arr[i];
        if (mp.find(val) == mp.end())
            mp[val] = {i + 1, i + 1};
        else
            mp[val].second = i + 1;
    }

    for (auto &[key, value] : mp)
    {
        cout << key << " " << value.first << " " << value.second << endl;
    }

    return 0;
}
