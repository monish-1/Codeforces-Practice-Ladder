#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define endl '\n'
#define xx   ' '
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++)
        cin>>p[i];

        

        string s;
        cin>>s;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
        }
        vector<pair<int,int>> vp;
        
        

        int q[n];
        int used[n+1]={};
        int k=zero;
        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<p[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                vp.push_back({p[i],i});
            }
            sort(vp.begin(),vp.end());

            for(int i=0;i<vp.size();i++)
            {
                q[vp[i].second]=i+1;
            }
            vp.clear();

            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    vp.push_back({p[i],i});
                }
            }
            sort(vp.begin(),vp.end());
            for(int i=0;i<vp.size();i++)
            {
                q[vp[i].second]=k+1;
                k++;
            }

            for(int i=0;i<n;i++)
            cout<<q[i]<<" ";
            cout<<endl;
            }


    }
    return 0;
}


