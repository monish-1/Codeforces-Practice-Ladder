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
    w(t)
    {
        string s;
        cin>>s;
        map<char,int> m;
        int n=s.size();
        for(auto x:s)
        {
            m[x]++;
        }
        int count=0;
        for(auto &x:m)
        {
            if(x.second==1)
            {
                cout<<x.first;
                count++;
                x.second=0;
            }
        }
        while(count<n)
        {
            for(auto &x:m)
            {
                if(x.second>0)
                {
                    cout<<x.first;
                    count++;
                    x.second--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
