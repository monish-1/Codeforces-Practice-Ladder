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
    int n,L,a;
    cin>>n>>L>>a;

    vector<int> t(n),l(n),c(n);

    for(int i=0;i<n;i++)
    {
        cin>>t[i]>>l[i];
    }
    int x=0,ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(t[i]-x)/a;
        x=t[i]+l[i];
    }
    ans+=(L-x)/a;

    cout<<ans;

    return 0;
}
