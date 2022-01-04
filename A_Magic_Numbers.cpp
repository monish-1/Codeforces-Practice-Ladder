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
    fast
    string s;
    cin >> s;
    int n = s.size();
    bool f=true;
    int i=0;
    while(i<n)
    {
        if(i+2<n and s[i]=='1' and s[i+1]=='4' and s[i+2]=='4')
        {
            i+=3;
        }
        else if(i+1<n and s[i]=='1' and s[i+1]=='4')
        {
            i+=2;
        }
        else if(s[i]=='1')
        {
            i++;
        }
        else
        {
            f=false;
            break;
        }
    }
    if(f)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}