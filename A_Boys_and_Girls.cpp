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
    fast
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int i = 0, j = 0;

    int x = min(n, m);
    if (m > n)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "GB";
        }
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            cout << "BG";
        }
    }

    for (int i = 0; i < m - x; i++)
        cout << 'G';
    for (int i = 0; i < n - x; i++)
        cout << 'B';

    return 0;
}
