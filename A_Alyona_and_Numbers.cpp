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
    int n,m;
    cin>>n>>m;

    ll a[5]={},b[5]={};
    for(int i=1;i<=n;i++)
    {
        a[i%5]++;
    }
    for(int j=1;j<=m;j++)
    {
        b[j%5]++;
    }

    ll ans=0;
    ans+=(a[0]*b[0]);
    ans+=(a[1]*b[4]);
    ans+=(a[2]*b[3]);
    ans+=(a[3]*b[2]);
    ans+=(a[4]*b[1]);

    cout<<ans;
    return 0;
}
