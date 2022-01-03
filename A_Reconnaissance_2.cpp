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
    int a[n];
    f(i,n)
    cin>>a[i];

    pair<int,int> ans;
    int m=abs(a[n-1]-a[0]);
    ans={1,n};
    for(int i=1;i<n;i++)
    {
        if(m>abs(a[i]-a[i-1]))
        {
            m=abs(a[i]-a[i-1]);
            ans={i,i+1};
        }
    }
    cout<<ans.first<<xx<<ans.second;

    return 0;
}
