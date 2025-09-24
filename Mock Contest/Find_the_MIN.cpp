#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> minheap;
    unordered_map<int, int> freq;

    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            minheap.push(x);
            freq[x]++;
        }
        else if (type == 2)
        {
            while (!minheap.empty() && freq[minheap.top()] == 0)
            {
                minheap.pop();
            }
            if (minheap.empty())
            {
                cout << "empty\n";
            }
            else
            {
                int mn = minheap.top();
                cout << mn << "\n";
                freq[mn] = 0;
            }
        }
    }
    return 0;
}