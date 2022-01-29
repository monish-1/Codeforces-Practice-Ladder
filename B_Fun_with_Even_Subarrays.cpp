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
        vector<int> a(n);
        for(auto &x:a)
        cin>>x;

        int c=1;

        for(int i=n-1;i>0;i--)
        {
            if(a[i]==a[i-1])
            {
                c++;
            }
            else
            break;
        }
        int ans=0;
        while(c<n)
        {
            if(a[n-c]==a[n-c-1])
            c++;
            else
            {
                c=c*2;
                if(c<n)
                a[n-c]=a[n-1];
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
