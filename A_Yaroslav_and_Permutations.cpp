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
    int h[1001]={};
    int m=0;
    f(i,n)
    {
        cin>>a[i];
        h[a[i]]++;
        m=max(m,h[a[i]]);
    }

    if(m>(n+1)/2)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}
