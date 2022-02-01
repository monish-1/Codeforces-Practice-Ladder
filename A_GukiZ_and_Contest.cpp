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
    cin>>n;

    vector<int> v(n),a(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    a=v;
    sort(all(v));

    for(int i=0;i<n;i++)
    {
        auto it= upper_bound(v.begin(),v.end(),a[i]);

        if(it==v.end())
        cout<<1<<xx;
        else
        {
            cout<<v.end()-it+1<<xx;
        }
    }
    return 0;
}
