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
        int l,r,k;
        cin>>l>>r>>k;
        int n=0;
        if(l==r)
        n=1;
        else
        {
            n=r-l+1;
        }

        if(((l%2==0 or r%2==0) and k>=n/2) or (n==1 and l>1) or (l%2==1 and r%2==1 and k>=(n+1)/2))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
