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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll> m;
    for(auto x:s)
    m[x]++;

    vector<ll> v;
    for(auto x:m)
    v.push_back(x.second);

    sort(all(v),greater<ll>());

    int sz=v.size();

    ll ans=0;
    ll count=0;
    for(int i=0;i<sz;i++)
    {
        if(count+v[i]<=k)
        {
            ans+=v[i]*v[i]*1LL;
            count+=v[i];
        }
        else
        {
            ans+=(k-count)*(k-count)*1LL;
            count=k;
            break;
        }
    }
    cout<<ans;

    return 0;
}
