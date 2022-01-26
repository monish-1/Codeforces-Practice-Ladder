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
        vector<int> a(n),b(n);
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a[i]=x;
            b[i]=x-i;
        }

        map<int,int> m;

        for(int i=0;i<n;i++)
        m[b[i]]++;

        ll ans=0;

        for(auto w:m)
        {
            int d=w.second;
            if(d>1)
            ans+= 1LL*d*(d-1)/2;
        }
        cout<<ans<<endl;

        
    }
    return 0;
}
