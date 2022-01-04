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
    int s,n;
    cin>>s>>n;
    int x,y;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(begin(v),end(v));
    int i=0;
    for( i=0;i<n;i++)
    {
        if(s<=v[i].first)
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            s+=v[i].second;
        }
    }
    cout<<"YES";
    return 0;
}