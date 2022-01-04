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
    int n;
    cin>>n;

    //2n+1 

    int spaces=n;
    for(int j=0;j<=n;j++)
    {
        for(int i=0;i<spaces;i++)
        cout<<xx;
        for(int i=0;i<=j;i++)
        {
            cout<<i;
            if(j!=0) 
            cout<<xx;
        }
        
        for(int i=j-1;i>=0;i--)
        {
            cout<<i;
            if(i!=0)
            cout<<xx;
        }
        spaces-=2;
        cout<<endl;
    }
    spaces=1;
    for(int j=n-1;j>=0;j--)
    {
        for(int i=1;i<=spaces;i++)
        {
            cout<<xx;
        }
        
        for(int i=0;i<=j;i++)
        {
            cout<<i;
            if(j!=0)
            cout<<xx;
        }
        
        for(int i=j-1;i>=0;i--)
        {
            cout<<i;
            if(i>0)
            cout<<xx;
        }
        
        cout<<endl;
        spaces+=2;
    }
    return 0;
}
