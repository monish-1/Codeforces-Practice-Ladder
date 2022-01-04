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
    int n=12,k;
    cin>>k;
    int a[n];
    int t=0;
    for(int i=0;i<n;i++)
    cin>>a[i],t+=a[i];
    sort(a,a+n,greater<int>());
    int l=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(l<k)
        {
            l+=a[i];
            ans++;
        }
        else
        break;
    }
    if(t<k)
    cout<<-1;
    else
    cout<<ans;
    return 0;
}