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
    int n,m;
    cin>>n>>m;

    int mid=(m+1)/2;
    vector<int> b;
    b.push_back(mid);
    int a=1;
    if(m%2!=0)
    {
        while(b.size()<m)
        {
            if(mid-a>=0)
            b.push_back(mid-a);
            if(mid+a<=m)
            b.push_back(mid+a);
            a++;
            
        }
    }
    else
    {
        while(b.size()<m)
        {
           
            if(mid+a<=m)
            b.push_back(mid+a);
            if(mid-a>=0)
            b.push_back(mid-a);
            a++;
            
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<b[i%m]<<endl;
    }
    return 0;
}
