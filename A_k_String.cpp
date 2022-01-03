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
    int k;
    string s;
    cin>>k;
    cin>>s;
    int n=s.size();
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++)
    m[s[i]]++;

    
    for(auto x:m)
    {
        if(x.second%k!=0)
        {
            cout<<-1;
            return 0;
        }
    }
    int w=n/k;
    string ans="";
    
    for(auto x:m)
    {
        int z=x.second/k;
        for(int i=0;i<z;i++)
        ans.push_back(x.first);
    }
    
    for(int i=0;i<k;i++)
    cout<<ans;
    return 0;
}
