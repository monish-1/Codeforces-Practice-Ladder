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
    cin.tie(NULL);cout.tie(NULL)
   

int ribbion(int n,int a,int b,int c,vector<int>& dp)
{
    if(n==0)
    return 0;
    else if(n<0)
    return INT_MIN;
    else if(dp[n]!=-1)
    return dp[n];
    else
    {
        int x=max({ribbion(n-a,a,b,c,dp),ribbion(n-b,a,b,c,dp),ribbion(n-c,a,b,c,dp)});
        dp[n]=x+1;
        return x+1;
    }
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1,-1);
    int ans=ribbion(n,a,b,c,dp);
    cout<<ans;
    return 0;
}
