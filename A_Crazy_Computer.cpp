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
    int n,c;
    cin>>n>>c;
    int a[n];
    f(i,n)
    cin>>a[i];
    int ans=1,count=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]<=c)
        ans++;
        else
        ans=1;
    }
    cout<<ans;
    return 0;
}