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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b,x,y;
        cin>>n>>m>>a>>b>>x>>y;
        if(x==a or y==b)
        {
            cout<<0<<endl; 
        }
        else if(x>=a and y>=b)
        {
            cout<<min(x-a,y-b)<<endl;
        }
        else if(x<=a and y>=b)
        {
            cout<<min(a-x+2*(n-a),y-b)<<endl;;
        }
        else if(x>=a and y<=b)
        {
            cout<<min(x-a,b-y+2*(m-b))<<endl;
        }
        else if(x<=a and y<=b)
        {
            cout<<min(a-x+2*(n-a),b-y+2*(m-b))<<endl;
        }
    }
    return 0;
}


