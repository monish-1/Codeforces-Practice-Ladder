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

vector<int> divi;

void divisors(int n)
{
    divi.resize(n,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(i);j++)
        {
            if(i%j==0)
            {
                if(i/j==i)
                divi[i]++;
                else
                divi[i]+=2;
            }
        }
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a<<xx<<b<<xx<<c;
    int n=a*b*c;
    divisors(n);

    int ans=0,m=1<<30;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                ans+=divi[i*j*k];
                ans%=m;
            }
        }
    }
    cout<<ans;

    return 0;
}
