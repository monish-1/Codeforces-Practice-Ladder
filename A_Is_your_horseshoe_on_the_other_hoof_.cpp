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
    int x;
    unordered_set<int> s;
    for(int i=0;i<4;i++)
    {
        cin>>x;
        s.insert(x);
    }
    int ans=4-s.size();
    //ans=max(0,ans);
    cout<<ans;
    return 0;
}


