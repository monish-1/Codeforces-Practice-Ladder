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
    long long x;    \
    cin >> x; \
    while (x--)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll &x:v)
    cin>>x;

    int ans=1;
    for(int i=0;i<n;i++)
    {
        

        int j=i+1;
        int c=1;
        while(j<n and v[j]<=v[j-1]*2)
        {
            c++;
            j++;
        }
        i=j-1;
        ans=max(ans,c);
    }

    cout<<ans;
    return 0;
}
