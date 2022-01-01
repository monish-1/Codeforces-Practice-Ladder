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
    w(t)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll sum=0;
        f(i,n)
        cin>>a[i],sum+=a[i];

        if(sum<=k)
        cout<<0<<endl;
        else if(n==1)
        {
            cout<<sum-k<<endl;
        }
        else
        {
            ll ans1=0,ans2=0,sum2=sum;
            sort(a,a+n);
            int minimum=a[0];
            int miidx=0;
            for(int i=1;i<n;i++)
            {
                if(a[i]==minimum)
                miidx++;
            }
            int j=n-1;
            while(sum>k and j>miidx)
            {
                if(a[j]>a[miidx])
                {
                    sum-=a[j]-a[miidx];
                    j--;
                    ans1++;
                }
                else
                {
                    break;
                }
                
            }

            ans2+=a[0];
            sum2-=a[0];
            j=n-1;
            while(sum2>k)
            {
                sum2-=a[j];
                j--;
                ans2++;
            }
            cout<<ans2;
            // if(sum<=k and sum2<=k)
            // {
            //     if(ans2>ans1)
            //     cout<<ans1;
            //     else
            //     cout<<ans2;
            // }


        }
    }
    return 0;
}


