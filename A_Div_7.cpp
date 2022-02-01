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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int r1=n%7;
        if(r1==0)
        {
            cout<<n<<endl;

        }
        else
        {
            int r2=r1;
            r2=7-r1;

            if((n-r1)/10==(n/10))
            {
                cout<<n-r1<<endl;
            }
            else
            {
                cout<<n+7-r1<<endl;
            }
        }
    }
    return 0;
}
