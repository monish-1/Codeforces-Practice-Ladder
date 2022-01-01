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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mini=a[0],mini_idx=0,max=a[0],max_idx=0;
    for(int i=0;i<n;i++)
    {
        if(a[n-1-i]>=max)
        {
            max=a[n-1-i];
            max_idx=n-1-i;
        }
        if(a[i]<=mini)
        {
            mini=a[i];
            mini_idx=i;
        }
    }
    if(mini_idx==n-1 and max_idx==0)
    {
        cout<<0;
    }
    else if(max_idx<mini_idx)
    {
        cout<<max_idx+(n-1-mini_idx);
    }
    else
    {
        cout<<max_idx+(n-1-mini_idx)-1;
    }

    return 0;
}


