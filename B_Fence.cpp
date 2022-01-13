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
    int n, k;
    cin >> n >> k;
    int a[n];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i < k)
            m += a[i];
    }
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    int idx = 0;
    int j = 0;

    for (int i = k; i < n; i++)
    {
        if (a[i] - a[j] < m)
        {
            idx = j + 1;
            m = a[i] - a[j];
        }
        j++;
    }
    cout << idx + 1;

    return 0;
}
