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
    string a,b;
    string s;
    cin>>s;

    a=s.substr(0,n);
    b=s.substr(n,n);
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int x=a[0]-b[0];
    for(int i=0;i<n;i++)
    {
        
        if(x*(a[i]-b[i])<=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
