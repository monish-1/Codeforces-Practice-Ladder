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
        int l,r,d=0;
        int h[n+1]={};
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++)
        {
            cin>>l>>r;
            vp.push_back({l,r});
            h[r]++;
            h[l]++;
        }
        if(n==1)
        {
            cout<<1<<xx<<1<<xx<<1<<endl;
        }
        else
        {
            int k=0;
            for(int i=1;i<=n;i++)
            {
                if(h[i]==0)
                {
                    k=i;
                    break;
                }
            }
            sort(vp.begin(),vp.end());
            vector<pair<pair<int,int>,int>> vpp;
            for(int i=0;i<n;i++)
            {
                if(vp[i].first==1 and vp[i].second==n and k!=0)
                {
                    vpp.push_back({{vp[i].first,vp[i].second},k});
                }
                else if(vp[i].first==vp[i].second)
                {
                    vpp.push_back({{vp[i].first,vp[i].second},vp[i].first});
                    h[vp[i].first]=0;
                }
                else
                {
                    if(h[vp[i].first]>0)
                    {
                        d=vp[i].first;
                        h[vp[i].first]=0;
                        vpp.push_back({{vp[i].first,vp[i].second},d});
                    }
                    else
                    {
                        d=vp[i].second;
                        h[vp[i].second]=0;
                        vpp.push_back({{vp[i].first,vp[i].second},d});
                    }
                    
                
                }

            }
            for(auto z:vpp)
            {
                cout<<z.first.first<<xx<<z.first.second<<xx<<z.second<<endl;
            }
        }
        
        cout<<endl;
    }
    return 0;
}


