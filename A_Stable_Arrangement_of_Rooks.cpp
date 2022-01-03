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
    fast
    int t;
    cin>>t;
    int x=-1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int count=0;
        if(k>(n+1)/2)
        {
            cout<<x<<endl;
        }
        else 
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j and (i%2==0) and count<k)
                    cout<<'R',count++;
                    else
                    cout<<'.';
                }
                cout<<endl;
            }
        }
        // cout<<endl;
    }

    return 0;
}