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
    string a,b;
    cin>>a>>b;
    int ans=0;

    int n=a.size(),m=b.size();

    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a.substr(i,m)==b)
        {
            ans++;
            i+=m-1;
        }
    }
    cout<<ans;
    return 0;
}
