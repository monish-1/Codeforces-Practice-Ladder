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
    vector<int> a(n),b(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    
    bool f=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            f=true;
        }
    }
    if(f)
    cout<<0;
    else
    cout<<n;

    return 0;
}
