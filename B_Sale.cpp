#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx ' '
#define what_is(x) cerr << #x << " is " << x << endl;
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < n; i++)
#define w(x)  int x;cin >> x;while (x--)
#define fast   ios_base::sync_with_stdio(false);  cin.tie(NULL);                     


int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int cost=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        if(a[i]<0)
        cost+=a[i];
    }
    cost=-1*cost;
    cout<<cost;
    return 0;
}