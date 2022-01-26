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
        vector<pair<int,int>> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i]={a[i].first,i+1};
        }
        sort(all(a));

        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               if(1LL*a[i].first*a[j].first==a[i].second+a[j].second)
               count++;
               else if(1LL*a[i].first*a[j].first>2*n)
               break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
