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
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 or i%l==0 or i%m==0 or i%n==0)
        count++;
    }
    cout<<count;
    return 0;
}


