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
    int one=0,two=0;
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==100)
        one++;
        else
        two++;
    }
    if(one&1 or (two&1 and one==0))
    cout<<"NO";
    else
    cout<<"YES";


    cout<<endl;


    return 0;
}
