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
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    if(n==1 or (n==2 and (v[0].first==v[1].first  or v[0].second==v[1].second)))
    cout<<-1;
    else
    {
        set<int> x;
        set<int> y;

        for(int i=0;i<n;i++)
        {
            x.insert(v[i].first);
            y.insert(v[i].second);
        }
        auto xb=x.begin(),yb=y.begin();
        cout<<abs(*xb-*(++xb))*abs(*yb-*(++yb));
    }
    return 0;
}
