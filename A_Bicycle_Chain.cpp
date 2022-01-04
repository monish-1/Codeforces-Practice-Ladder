#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx ' '
#define what_is(x) cerr << #x << " is " << x << endl;
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < n; i++)
#define w(x)  int x;cin >> x;while (x--)
#define fast   ios_base::sync_with_stdio(false);  cin.tie(NULL);                     


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    map<int,int> ma;

    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                int r=b[j]/a[i];
                ma[r]++;
            }
        }
    }
    int max=-1,count=0;
    for(auto x:ma)
    {
        if(x.first>max)
        {
            max=x.first;
            count=x.second;
        }
    }
    cout<<count;
    return 0;
}
