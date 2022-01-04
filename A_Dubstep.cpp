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
    string a;
    cin>>a;
    int i=0;
    int n=a.size();
    string ans="";
    while(i<n)
    {
        if(i+2<n and a[i]=='W' and a[i+1]=='U' and a[i+2]=='B')
        {
            i+=3;
            if(ans.size()!=0 and ans.back()!=' ')
            ans.push_back(xx);
        }
        else
        ans.push_back(a[i]),i++;
    }
    cout<<ans;

    return 0;
}