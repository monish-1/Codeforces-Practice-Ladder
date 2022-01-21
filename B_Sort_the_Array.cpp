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
    vector<int> a(n);
    for(int &x:a)
    cin>>x;

    int count=0;
    pair<int,int> p={1,1};
    int mini=a[0];
    int maxi=a[0];

    for(int i=0;i<n-1;i++)
    {
        if( a[i]<=a[i+1])
        {
            mini=min(mini,a[i]);
            maxi=max(a[i],maxi);
        }
        else
        {
            count++;
            int x=i,y=i;
            int z=0;
            while(a[i]>=a[i+1] and i<n-1)
            {
                if(a[i]<mini)
                {
                    count=10;
                    break;
                }
                if(a[i]<maxi)
                {
                    count=100;
                    break;
                }
                i++;
                z++;
            }
            y=i;
            // cout<<a[y];
            p={x+1,y+1};
            auto it=a.begin();
            for(int i=0;i<x;i++)
            it++;
            // cout<<"f"<<xx;
            auto e=it;
            for(int i=x;i<=y;i++)
            e++;
            //cout<<*it<<xx<<*e<<endl;
            reverse(it,e);
            // cout<<endl;
            // for(auto x:a)
            // cout<<x<<xx;
            i--;
        }
    }
    if(count>1)
    cout<<"no";
    else
    {
    cout<<"yes\n";
   
    cout<<p.first<<xx<<p.second;
    }    
    return 0;
}
