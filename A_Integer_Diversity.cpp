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
    w(t)
    {
        int n;
        cin>>n;
        int x=0,ans=0;
        
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==0)
            ans=1;
            else
            m[x]++;
        }
        //cout<<ans<<xx<<m.size()<<" ";
        ans+=m.size();
        for(auto m1:m)
        {
            if(m1.second>1 and m.find(-1*m1.first)==m.end())
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}


