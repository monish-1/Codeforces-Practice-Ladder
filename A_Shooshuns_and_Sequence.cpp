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
    int n,k;
    cin>>n>>k;
    int a[n];
    f(i,n)
    cin>>a[i];
    int x=k-1;
    for(int i=x;i<n;i++)
    {
        if(a[i]!=a[x])
        {
            cout<<-1;
            return 0;
        }
    }
    while(x>0 and a[x-1]==a[k-1])
    {
        x--;
    }
    cout<<x;
    return 0;
}
