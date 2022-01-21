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
    ll a,b,n;
    cin>>a>>b>>n;
    bool f=false;

    for(ll i=0;i<10;i++)
    {
        if((a*10+i)%b==0)
        {
            a=a*10+i;
            f=true;
            break;
        }
    }
    if(f==true)
    {
        cout<<a;
        for(int i=0;i<n-1;i++)
        cout<<0;
    }
    else
    cout<<-1;

    return 0;
}
