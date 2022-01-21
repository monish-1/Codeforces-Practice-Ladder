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
    map<int,int> m;
    for(int i=1;i<=11;i++)
    m[i]=4;
    m[10]+=11;
    n-=10;
    if(n<0 or n>11)
    cout<<0;
    else
    {
        cout<<m[n];
    }

    return 0;
}
