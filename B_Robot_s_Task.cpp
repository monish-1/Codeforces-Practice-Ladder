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

    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    int count = 0;
    int i = 0;

    int ans = 0;
    while (count < n)
    {
        if(i<0)
        {
            ans++;
            i=0;
        }
        if (v[i] >= 0 and v[i] <= count)
        {
            count++;
            v[i] = -1;
        }
        i++;
        if (i >= n and count<n)
        {
            ans++;
            i=n-1;
            while(i>=0 and count<n)
            {
                if (v[i] >= 0 and v[i] <= count)
                {
                    count++;
                    v[i] = -1;
                }
                i--;
            }
        }
    }
    cout << ans;
    return 0;
}
