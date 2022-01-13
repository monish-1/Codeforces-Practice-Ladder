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
    string s;
    cin>>s;
    int c=0;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(c==0 and s[i]=='0')
        c++;
        else
        ans.push_back(s[i]);
    }
    int n=s.size();
    if(ans.size()==n)
    {
        cout<<ans.substr(0,n-1);
    }
    else
    cout<<ans;
    return 0;
}
