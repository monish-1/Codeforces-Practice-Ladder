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
    int a[2*n+1];
    for(int i=0;i<=2*n;i++)
    {
        a[i]=i;
    }
   
   for(int i=1;i<=k;i++)
   {
       swap(a[2*i-1],a[2*i]);
   }
    for(int i=1;i<=2*n;i++)
    cout<<a[i]<<xx;
    return 0;
}