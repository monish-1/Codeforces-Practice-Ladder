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

void divisors()
{
    int n=1000001;
    divi.resize(1000001,0);
    for(int i=2;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        divi[j]++;
    }
   
}
int main()
{
    fast
    int a,b,c;
    cin>>a>>b>>c;
    //cout<<a<<xx<<b<<xx<<c<<endl;
    int n=a*b*c;
    divisors();

    int ans=0;
    int m=1<<30;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                ans+=divi[i*j*k]+1;
                ans%=m;
            }
        }
    }
    cout<<ans;

    return 0;
}
