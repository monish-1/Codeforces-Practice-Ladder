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
        int n;
        cin>>n;
        int a[n];
        int h[n+1]={};
        f(i,n)
        {
            cin>>a[i];
            while(a[i]>n)
            {
                a[i]/=2;
            }
            h[a[i]]++;
        }

       
        for(int i=n;i>0;i--)
        { 
            while(h[i]>1)
            {
                h[i]--;
                h[i/2]++;
            }
        }
        bool f=true;
        for(int i=1;i<=n;i++)
        {
            if(h[i]==1)
            continue;
            else
            f=false;
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    
    return 0;
}
