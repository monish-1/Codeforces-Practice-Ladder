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
int N=1e5+1;
int idx=0;

vector<bool> prime;
vector<int> p;
void  seive()
{
    prime.resize(N,true);

    for(int i=2;i<sqrt(N);i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<N;j+=i)
            prime[j]=false;
        }
    }
    for(int i=2;i<N;i++)
    {
        if(prime[i])
        p.push_back(i);
    }
}
struct ans
{
    int a,b,c,d;
};
int main()
{
    int t;
    cin>>t;
    seive();
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x:a)
        {
            cin>>x;
        }

        ans temp;
        vector<ans> v;
        for(int i=1;i<n;i++)
        {
            int x=__gcd(a[i],a[i-1]);
            if(x!=1)
            {
                temp.a=i-1;
                temp.b=i;
                if(a[i]>a[i-1])
                {
                    a[i]=p[idx++];
                    temp.c=a[i-1];
                    temp.d=a[i];
                }
                else
                {
                    a[i-1]=p[idx++];
                    temp.c=a[i-1];
                    temp.d=a[i];
                }
                v.push_back(temp);
            }
        }
        cout<<v.size()<<endl;
        for(auto z:v)
        {
            cout<<z.a<<xx<<z.b<<xx<<z.c<<xx<<z.d<<endl;
        }
    }
    return 0;
}
