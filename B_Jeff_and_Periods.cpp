#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx ' '
#define what_is(x) cerr << #x << " is " << x << endl;
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < n; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define N 100001
int main()
{
    vector<int> a[N];
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x].push_back(i);
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < N; i++)
    {
        if (a[i].size() == 1)
        {
            ans.push_back({i, 0});
        }
        else if (a[i].size() > 1)
        {
            int d = a[i][1] - a[i][0];
            bool f = true;
            for (int j = 1; j < a[i].size(); j++)
            {
                if (a[i][j] - a[i][j-1] != d)
                {
                    f = false;
                    break;
                }
            }
            if (f)
                ans.push_back({i, d});
        }
        
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x.first << xx << x.second << endl;
    }

    return 0;
}