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

        vector<int> c;

        f(i,n)
        cin>>a[i];

        int d=INT_MAX;
        int x=0,y=0;
        b=a;
        sort(all(b));
        if(n==2)
        {
            for(auto h:b)
            cout<<h<<xx;
            cout<<endl;
            continue;
        }
    


        for(int i=0;i<n-1;i++)
        {
            if(d>abs(b[i+1]-b[i]))
            {
                d=b[i+1]-b[i];
                x=i;
                y=i+1;
            }
        }

       for(int i=y;i<n;i++)
       cout<<b[i]<<xx;

       for(int i=0;i<y;i++)
       cout<<b[i]<<xx;
        cout<<endl;
        
    }
    return 0;
}
