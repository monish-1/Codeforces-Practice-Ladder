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
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string> st;
        string a="",b="";
        for(int i=0;i<n;i++)
        {
            a=s.substr(0,i+1);
            b=a;
            reverse(b.begin(),b.end());
            a+=b;
            st.insert(a);
            if(st.size()>100)
            {
                auto it = st.begin();
                it++;
                st.erase(it,st.end());
            }
        }
        auto it=st.begin();
        cout<<*it<<endl;
    }
    
    return 0;
}