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
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int minimum=INT_MAX,maximum=INT_MIN;

    for(int i=0;i<n;i++)
    cin>>a[i],minimum=min(minimum,a[i]),maximum=max(maximum,a[i]);

    int bm=INT_MAX;

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        bm=min(bm,b[i]);
    }
    if(max(2*minimum,maximum)<bm)
    cout<<max(2*minimum,maximum);
    else
    cout<<-1;

    return 0;
}
