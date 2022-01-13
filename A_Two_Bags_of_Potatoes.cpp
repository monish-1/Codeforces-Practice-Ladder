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
    fast
    int x,y,n,k;
    cin>>y>>k>>n;

    x=k-y%k;
    
    bool f=true;
    while(x+y<=n)
    {
        if((x+y)%k==0)
        {
            cout<<x<<xx,f=false;
            x+=k;
        }
        else
        x++;
    }
    if(f)
    cout<<-1;

    return 0;
}
