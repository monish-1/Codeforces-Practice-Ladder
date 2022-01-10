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
    int t;
    cin >> t;
    while (t--)
    {

        long long a, b, c;
        cin >> a >> b >> c;
        
        if(2*b==a+c or ((2*b-c)%a==0 and (2*b-c>0)) or ((c+a)%(2*b)==0) or ((2*b-a)%c==0 and (2*b-a)>0))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}