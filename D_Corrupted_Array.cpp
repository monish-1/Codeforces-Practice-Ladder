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
        int N=n+2;
        vector<int> b(N);

        for(int i=0;i<N;i++)
        cin>>b[i];

        sort(all(b));

        ll m1=b[N-1],m2=b[N-2];

        ll sum=0;
        int x=-1;
        for(int i=0;i<n;i++)
        {
            sum+=b[i];
        }

        if(sum==m1)
        {
            x=m2;
            for(int i=0;i<n;i++)
            cout<<b[i]<<xx;
            cout<<endl;
        }
        else if(sum==m2)
        {
            x=m1;
            for(int i=0;i<n;i++)
            {
                cout<<b[i]<<xx;
            }
            cout<<endl;
        }
        else
        {
            sum+=m2;

            for(int i=0;i<n;i++)
            {
                if(sum-b[i]==m1)
                {
                    x=i;
                    break;
                }
            }
            if(x==-1)
            {
                cout<<-1<<endl;
                
            }
            else
            {
                for(int i=0;i<N-1;i++)
                {
                    if(i==x)
                    continue;
                    else
                    cout<<b[i]<<xx;
                }
                 cout<<endl;
            }
           
        }



    }
    return 0;
}
