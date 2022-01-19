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
    int n,m,d;
    cin>>n>>m>>d;
    
    vector<vector<int>> v(n,vector<int>(m));

    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
        cin>>v[i][j];
        s.insert(v[i][j]%d);
        if(s.size()>1)
        {
            cout<<-1;
            return 0;
        }
        }
    }

    vector<int> a;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        a.push_back(v[i][j]);
    }
    sort(all(a));
    int mid=(m*n)/2;
    
    ll ans=0;

    int x=a[mid];
    
    for(int i=0;i<n*m;i++)
    {
        ans+=abs(x-a[i]);           
    }

   
    cout<<ans/d;
    
    return 0;
}
