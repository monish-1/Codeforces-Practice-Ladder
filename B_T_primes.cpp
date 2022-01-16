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
vector<bool> prime;
void seive()
{
    int n=1e6+1;
    prime.resize(n,true);

    prime[0]=false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<n;j+=i)
            prime[j]=false;
        }
    }

}
int main()
{
    seive();
    set<ll> s;
    for(int i=2;i<1e6+1;i++)
    {
        if(prime[i])
        {
            s.insert(1LL*i*i);
        }
    }
    w(n)
    {
        
        ll x;
        cin>>x;
      if(s.count(x)>0)
      cout<<"YES";
      else
      cout<<"NO";
       cout<<endl;

    }
    return 0;
}
