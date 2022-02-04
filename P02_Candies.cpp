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
    vector<int> a(n);
    for(int&x:a)
    cin>>x;

    for(int i=1;i<n;i++)
    a[i]+=a[i-1];

    int x,y;
    cin>>x>>y;

    if(x>0)
    {
        cout<<a[y]-a[x-1];
    }
    else
    cout<<a[y];
    return 0;
}
