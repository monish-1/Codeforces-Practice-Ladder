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
    string ans="";

    for(int i=0;i<b.size();i++)
    {
        if(a[i]!=b[i])
        ans.push_back('1');
        else
        ans.push_back('0');
        
    }
    cout<<ans;
    return 0;
}


