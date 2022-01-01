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
    int s=7,t=0;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
        t+=a[i];
    }
    if(n>t and n%t!=0)
    n=n%t;
    int i=0;
    while(n>0)
    {
        if(i>=s)
        i%=s;
        //cout<<n<<xx<<a[i]<<endl;
        n-=a[i];
        if(n<=0)
        {
            cout<<i+1;
            break;
        }
        i++;
    }
    
    
    return 0;
}


