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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int one=0,zero=0;
        int n=s.size();

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            one++;
            else
            zero++;
        }
        if(one==0 or zero==0)
        cout<<0<<endl;
        else if(one!=zero)
        {
            cout<<min(one,zero)<<endl;
        }
        else
        {
            cout<<one-1<<endl;
        }

    }
    return 0;
}
