#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx ' '
#define what_is(x) cerr << #x << " is " << x << endl;
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < n; i++)
#define w(x)  int x;cin >> x;while (x--)
#define fast   ios_base::sync_with_stdio(false);  cin.tie(NULL);                     


int main()
{
    fast
    ll n,m;
    cin>>n>>m;
    ll a[m];
    ll pos=1,cost=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]>=pos)
        {
            cost+=a[i]-pos;
            pos=a[i];
        }
        else
        {
            cost+=n-pos+a[i];
            pos=a[i];
        }
    }
    cout<<cost;
    return 0;
}