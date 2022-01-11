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
    string a,b;
    cin>>a>>b;
    int n=a.size();
    map<char,int> h;
    for(auto x:a)
    h[x]++;
    for(auto x:b)
    h[x]--;

    int s=0;
    for(auto x:h)
    {
        if(x.second!=0)
        s=1;
    }
    int count=0;

    for(int i=0;i<n;i++)
    if(a[i]!=b[i])
    count++;

    if(count==2 and s==0)
    cout<<"YES";
    else
    cout<<"NO";

    cout<<endl;
    
    return 0;
}
