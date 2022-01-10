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
    int a[n];
    int h[8]={};
    f(i,n)
    cin>>a[i],h[a[i]]++;
    if(h[1]!=n/3 or (h[2]+h[3])!=n/3 or h[4]+h[6]!=n/3 or h[3]>h[6])
    cout<<-1;
    else
    {
        while(h[3]>0)
        {
            cout<<1<<xx<<3<<xx<<6<<endl;
            h[3]--;
            h[6]--;
            h[1]--;
        }
        while(h[2]>0)
        {
            
            cout<<1<<xx<<2<<xx;
            if(h[6]>0)
            {
                cout<<6<<endl;
                h[6]--;
            }
            else
            cout<<4<<endl;
            h[2]--;
        }
    }

     return 0;
}
