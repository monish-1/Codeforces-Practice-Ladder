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
    int x,m;
    cin>>x;
    int minimum=x;
    int maximum=x;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        if(x>maximum)
        {
            ans++;
            maximum=x;
        }
        if(x<minimum)
        {
            minimum=x;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}


