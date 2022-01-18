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
    f(i,n)
    cin>>a[i];

    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int count=0;
            for(int k=i;k<=j;k++)
            {
                if(a[k]==0)
                count++;
            }
            int x=i-1,y=j+1;
            while(x>=0)
            count+=a[x],x--;
            while(y<n)
            count+=a[y],y++;
            ans=max(ans,count);
        }
    }
    cout<<ans;
    return 0;
}
