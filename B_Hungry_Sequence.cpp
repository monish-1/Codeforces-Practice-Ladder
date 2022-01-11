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
vector<int> prime;
vector<int> ans;
void seive()
{
    int N=10000001;
    prime.resize(10000001,1);
    prime[0]=prime[1]=0;
    
    for(int i=2;i*i<N;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<N;j+=i)
            prime[j]=0;
        }
    }
    for(int i=2;i<N;i++)
    if(prime[i])
    ans.push_back(i);
}
int main()
{
    int n;
    cin>>n;
    seive();

    for(int i=0;i<n;i++)
    cout<<ans[i]<<xx;
    return 0;
}
