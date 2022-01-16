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
    vector<ll> v(n+1);
    vector<ll> u(n+1);
    v[0]=u[0]=0;

    for(int i=1;i<n+1;i++)
    cin>>v[i];

    u=v;

    for(int i=1;i<n+1;i++)
    v[i]+=v[i-1];
    sort(u.begin()+1,u.end());

    for(int i=1;i<n+1;i++)
    u[i]+=u[i-1];

    int m;
    cin>>m;

    while(m--)
    {
        int t,l,r;
        cin>>t>>l>>r;

        if(t==1)
        {
            cout<<v[r]-v[l-1]<<endl;
        }
        else
        {
            cout<<u[r]-u[l-1]<<endl;
        }
    }
    return 0;
}
