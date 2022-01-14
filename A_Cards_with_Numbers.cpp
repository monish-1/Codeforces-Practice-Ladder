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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int x=0;
    vector<pair<int,int>> vp;
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        vp.push_back({x,i+1});
    }
    bool f=true;
    sort(all(vp));
    for(int i=1;i<2*n;i+=2)
    {
        if(vp[i].first!=vp[i-1].first)
        {
            f=false;
            cout<<-1;
            break;
        }
    }
    if(f)
    {
        for(int i=1;i<2*n;i+=2)
        {
            cout<<vp[i].second<<xx<<vp[i-1].second<<endl;
        }
    }
    return 0;
}
