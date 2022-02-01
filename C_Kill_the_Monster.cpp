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
        ll hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        bool f=true;
        for(ll i=0;i<=k;i++)
        {
            ll H=hc+i*a,D=dc+(k-i)*w;
            ll x=H/dm,y=hm/D;
            if(H%dm!=0)
            x++;
            if(hm%D!=0)
            y++;
            if(x>=y)
            {
                cout<<"YES\n";
                f=false;
                break;
            }      
        }

        if(f)
        cout<<"NO\n";
        
    }
    return 0;
}
