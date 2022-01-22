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
    w(t)
    {
        ll n,k;
        cin>>n>>k;

        vector<pair<int,int>> v;
        int a[n],b[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        f(i,n)
        {
            cin>>b[i];
            v.push_back({a[i],b[i]});
        }
        


        sort(all(v));

        for(int i=0;i<n;i++)
        {
            if(v[i].first<=k)
            {
                k+=v[i].second;
            }
        }
        cout<<k<<endl;

    }
    return 0;
}
