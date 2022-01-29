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

    map<int,bool> m;
    int temp=n;
    while (temp)
    {
        m[temp%10]=true;
        temp/=10;
    }
    vector<int> divisors;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            divisors.push_back(i);
            if(n/i!=i)
            {
                divisors.push_back(n/i);
            }
        }
    }

    int ans=0;
    for(int x:divisors)
    {
        while(x)
        {
            if(m[x%10]==true)
            {
                ans++;
                break;
            }
            x/=10;
        }
    }

    cout<<ans;


    return 0;
}
