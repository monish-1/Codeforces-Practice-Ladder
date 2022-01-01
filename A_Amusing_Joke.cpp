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
    string a,b,c;
    cin>>a>>b>>c;
    if(a.size()+b.size()!=c.size())
    {
        cout<<"NO";
    }
    else
    {
        int H[26]={};
        for(int i=0;i<c.size();i++)
        {
            H[c[i]-'A']++;
        }
        
        for(int i=0;i<a.size();i++)
        {
            if(H[a[i]-'A']<=0)
            {
                cout<<"NO";
                return 0;
            }
            H[a[i]-'A']--;
        }
        for(int i=0;i<b.size();i++)
        {
            if(H[b[i]-'A']<=0)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}


