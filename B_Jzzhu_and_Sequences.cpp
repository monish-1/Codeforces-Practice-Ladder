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
    ll a,b,n;
    cin>>a>>b>>n;
    ll ans[]={a,b,b-a,-a,-b,a-b};
    n=(n-1)%6;
   
    cout<<(ans[n]%mod+mod)%mod;
   
    return 0;
}
