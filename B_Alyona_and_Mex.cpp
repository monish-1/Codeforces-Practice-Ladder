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
    vector<int> v(n);

    for(auto &x:v)
    cin>>x;

    sort(all(v));

    int h[n+2]={};

    int i=0,j=1;
    while(i<n)
    {
       if(v[i]>=j)
       {
           h[j]++;
           j++;
       } 
       i++;
    }

    for(int i=1;i<=n+1;i++)
    {
        if(h[i]==0)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
