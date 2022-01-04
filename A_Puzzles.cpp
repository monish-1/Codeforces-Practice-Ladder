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
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(begin(a),end(a));
    int i=0,j=i+n-1;
    int ans=INT_MAX;
    while(j<m)
    {
        ans=min(ans,a[j]-a[i]);
        i++,j++;
    }
    cout<<ans;
    return 0;
}