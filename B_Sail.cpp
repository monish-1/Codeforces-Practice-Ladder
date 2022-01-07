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
    int t, x1, y1, x2, y2;
    cin >> t >> x1 >> y1 >> x2 >> y2;
    int e = 0, w = 0, n = 0, s = 0;
    e = max(0, x2 - x1), w = max(x1 - x2, 0), n = max(0, y2 - y1), s = max(0, y1 - y2);

    int ans = 0;
    char c;
    for (int i = 0; i < t; i++)
    {
        if (x1 == x2 and y1 == y2)
        {
            break;
        }
        cin >> c;

        if (c == 'E' and e > 0)
        {
            e--;
            x1++;
        }
        else if (c == 'W' and w > 0)
        {
            w--;
            x1--;
        }
        else if (c == 'N' and n > 0)
        {
            n--;
            y1++;
        }
        else if (c == 'S' and s > 0)
        {
            s--;
            y1--;
        }
        ans++;
    }
    if (x1 == x2 and y1 == y2)
        cout << ans;
    else
        cout << -1;

    return 0;
}