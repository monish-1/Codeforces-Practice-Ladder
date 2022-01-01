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
    int n,m;
    cin>>n>>m;
    double a[n];

    int mi=0,idx=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=ceil(a[i]/m);
        if(a[i]>=mi)
        {
            mi=a[i];
            idx=i;
        }
    }
    cout<<idx+1;
    return 0;
}