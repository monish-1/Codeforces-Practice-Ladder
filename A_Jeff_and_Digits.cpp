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
    int n,zero=0,five=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        zero++;
        else
        five++;
    }
    if(zero==0)
    cout<<-1;
    else
    {
        five-=five%9;
        bool f=false;
        for(int i=0;i<five;i++)
        cout<<5,f=true;
        if(f==true)
        for(int i=0;i<zero;i++)
        cout<<0;
        else
        cout<<0;

    }

    return 0;
}
