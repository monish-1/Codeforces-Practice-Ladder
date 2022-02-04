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
    int n;
    cin>>n;

    int a[2*n];

    int m=INT_MAX;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m=min(m,a[i]);
        a[n+i]=a[i];
    }

    int d=0,prev=-1;
    for(int i=0;i<2*n;i++)
    {
        if(a[i]==m)
        {
            if(prev==-1)
            {
                d=i;
            }
            else
            d=max(d,i-1-prev);
            prev=i;
        }

    }
    cout<<1LL*m*n+d;
    return 0;
}