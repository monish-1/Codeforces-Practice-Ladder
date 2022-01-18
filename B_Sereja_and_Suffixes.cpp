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
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[n];
    f(i,n)
    cin>>a[i];

    unordered_set<int> s;

    for(int i=n-1;i>=0;i--)
    {
        s.insert(a[i]);
        b[i]=s.size();
    }
    int l=0;
    while(m--)
    {
        cin>>l;
        
       cout<<b[l-1]<<endl;

    }

    return 0;
}
