#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx   ' '
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
    int n,l,r;
    cin>>n;
    int l1=0,r1=0;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l==1)
        l1++;
        if(r==1)
        r1++;
    }
    int ans=0;
    ans+=min(l1,n-l1);
    ans+=min(r1,n-r1);
    cout<<ans;
    return 0;
}


