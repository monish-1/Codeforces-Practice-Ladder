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
    int n;
    string s;
    cin>>n>>s;
    bool r=false,l=false;

    for(char c:s)
    {
        if(c=='L')
        l=true;
        else if(c=='R')
        r=true;
        if(l and r)
        break;
    }
    int start=0,end=0;
    if(l==true and r==false)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='L')
            {
                start=i+1;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                end=i;
                break;
            }
        }

        cout<<start<<xx<<end;
    }
    else if(l==false and r==true)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                start=i+1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='R')
            {
                end=i+2;
                break;
            }
        }
        // cout<<"Only R";
        cout<<start<<xx<<end;
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='L')
            {
                start=i+1;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                end=i+1;
                break;
            }
        }
        cout<<start<<xx<<end;
    }
    return 0;
}
