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

int main()
{
    int n;
    cin >> n;
    string s;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }

    auto it = m.begin();
    if (n == 1)
        cout << it->first;
    else
    {
        it++;
        if (it->second > (m.begin()->second))
        {
            cout << it->first;
        }
        else
            cout << m.begin()->first;
    }

    return 0;
}