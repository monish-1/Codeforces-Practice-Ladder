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
        ll a[3];
        f(i,3)
        cin>>a[i];
        sort(a,a+3);
        ll l1,l2,l3;
        l1=a[0],l2=a[1],l3=a[2];

        if((l1==l2 and l3%2==0) or (l2==l3 and l1%2==0) or(l3-l1==l2 ) or l3-l2==l1  )
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}


