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
    string a,b;
    cin>>a>>b;
    int n=a.size(),m=b.size();
    if(n==m)
    {
        int i=0,j=m-1;
        while(i<n and j>=0)
        {
            if(a[i]!=b[j])
            {
                cout<<"NO";
                return 0;
            }
        i++,j--;
        }
        cout<<"YES";
    }
    else
    cout<<"NO";
    
        
    return 0;
}