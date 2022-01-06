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
    ll n;
    cin>>n;
    int a[n];
    int mn=INT_MAX,mx=INT_MIN;
    f(i,n)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    ll cmn=0,cmx=0;
    f(i,n)
    {
        if(a[i]==mn) cmn++;
        if(a[i]==mx) cmx++;
    }

    if(mn==mx)
    {
        cout<<0<<xx<<n*(n-1)/2;
    }
    else
    {
        cout<<mx-mn<<xx<<cmn*cmx;
    }
    
    
    return 0;
}