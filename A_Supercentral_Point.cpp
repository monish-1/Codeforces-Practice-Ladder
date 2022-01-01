#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx   ' '
#define fi    first
#define se    second
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
    int x,y;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        bool l=false,r=false,u=false,d=false;
        for(int j=0;j<n;j++)
        {
            if(j==i)
            continue;
            if(v[j].first==v[i].first and v[j].se>v[i].se)
            u=true;
            if(v[j].fi==v[i].fi and v[j].se<v[i].se)
            d=true;
            if(v[j].fi<v[i].fi and v[j].se==v[i].se)
            l=true;
            if(v[j].fi>v[i].fi and v[j].second==v[i].second)
            r=true;
        }
        if(u==true and d==true and l==true and r==true)
        ans++;
    }
    cout<<ans;

    return 0;
}


