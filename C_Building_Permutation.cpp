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
    int a[n];
    f(i,n)
    cin>>a[i];

    sort(a,a+n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(a[i]-(i+1));
    }
    cout<<ans;
    return 0;
}
