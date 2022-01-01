#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx   ' '
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
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    if(a==b)
    cout<<0;
    else if(a.compare(b)>0)
    {
        cout<<1;
    }
    else
    cout<<-1;
    return 0;
}