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

        vector<int> a(n),b(n);

        for(auto &x:a)
        cin>>x;

        for(auto &x:b)
        cin>>x;

        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                swap(a[i],b[i]);
            }
        }

        sort(all(a));
        sort(all(b));

        cout<<1LL*a[n-1]*b[n-1]<<endl;

    }
    return 0;
}
