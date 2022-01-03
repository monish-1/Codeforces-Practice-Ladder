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
    int m=INT_MAX,idx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<m)
        idx=i,m=a[i];
    
    }
    int c=0;
    for(int x:a)
    {
        if(x==m)
        c++;
    }
    if(c>1)
    cout<<"Still Rozdil";
    else
    cout<<idx+1;
    return 0;
}
