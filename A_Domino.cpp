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
    int a[n],b[n];
    int sum1=0,sum2=0;
    int odd=0,even=0;
    bool f=false;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sum1+=a[i];
        sum2+=b[i];
        if(a[i]%2==0 and b[i]%2==1 or a[i]%2==1 and b[i]%2==0)
        f=true;
    }
    if(sum1%2==0 and sum2%2==0)
    cout<<0;
    else if(sum1%2==1 and sum2%2==1 and f)
    {
        cout<<1;
    }
    else
    cout<<-1;
    return 0;
}
