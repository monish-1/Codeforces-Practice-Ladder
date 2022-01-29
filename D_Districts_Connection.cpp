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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        cin>>a[0];
        int same=1;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==a[i-1])
            same++;
        }
        if(same==n)
        {
            cout<<"NO\n";
        }
        else
        {
            puts("YES");
            vector<pair<int,int>> b;

            for(int i=0;i<n;i++)
            {
                b.push_back({a[i],i+1});
            }
            sort(all(b));

            for(int i=0;i<n-1;i++)
            {
                if(b[i].first!=b[n-1].first)
                {
                    cout<<b[i].second<<xx<<b[n-1].second<<endl;
                }
                else if(b[i].first!=b[0].first)
                {
                    cout<<b[i].second<<xx<<b[0].second<<endl;
                }
            }
        }
    }
    return 0;
}
