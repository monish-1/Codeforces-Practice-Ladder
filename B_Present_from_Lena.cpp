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
    cin>>n;
    for(int i=1;i<=2*n+1;i++)
    {
        int spaces= i<=n ? n-i+1 : i-n-1;
        for(int s=0;s<spaces;s++)
        cout<<xx<<xx;

        int col=(abs(n+1-spaces));

        for(int j=0;j<col;j++)
        {
            if(j==0 and col==1)
            cout<<j;
            else
            cout<<j<<xx;
        }
        
        for(int j=col-2;j>=0;j--)
        {
            cout<<j;
            if(j>0)
            cout<<xx;
        }
        
        cout<<endl;
    }
    return 0;
}
