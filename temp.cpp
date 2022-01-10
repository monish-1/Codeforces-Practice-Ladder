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
    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> p(n);
        for(int i=0;i<n;i++)
        {
            p[i]=i+1;
        }
        int c=0;
        int x=1;
        while(c<k)
        {
            x<<=1;
            if(x>=n)
            x%=n;
            c++;
        }
        c=0;
        int z=1;
        while(c<n)
        {
            cout<<z<<xx;
            z+=x;
            if(z>n)
            {
                z%=n;
                z++;
            }
            c++;
        }
        cout<<endl;
        // ll x=1<<k;
        // x%=n;
        // vector<int> ans;
        // int i=0;
        // while(ans.size()<n)
        // {
        //     ans.push_back(p[i]);
        //     i+=x;
        //     i%=n;
        // }
        // int count=1;
        // for(auto x:p)
        // cout<<x<<xx;
        // cout<<endl;
        // while(k--)
        // {
        //     cout<<count<<"=>"<<xx;
        //     count++;
        //     vector<int> temp;
        //     for(int i=0;i<n;i+=2)
        //     {
        //         temp.push_back(p[i]);
        //     }
        //     for(int i=1;i<n;i+=2)
        //     {
        //         temp.push_back(p[i]);
        //     }
        //     p=temp;
        //     for(auto x:p)
        //     cout<<x<<" ";
        //     cout<<endl;
        // }
        // for(auto x:p)
        // cout<<x<<" ";
        // cout<<endl;
        
    }
    return 0;
}