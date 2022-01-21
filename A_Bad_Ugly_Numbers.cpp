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
        if(n==1)
        cout<<-1<<endl;
        else
        {
            if(n&1)
            {
                cout<<22;
                for(int i=0;i<n-2;i++)
                cout<<3;
            }
            else
            {
                cout<<2;
                for(int i=0;i<n-1;i++)
                cout<<3;
            }
            cout<<endl;
        }
    }
    return 0;
}
