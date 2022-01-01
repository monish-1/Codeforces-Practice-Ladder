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
    int n;
    cin>>n;
    int p,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        sum+=p;
    }
    cout<<setprecision(10)<<fixed;
    cout<<(double)sum/(n);
    return 0;
}


