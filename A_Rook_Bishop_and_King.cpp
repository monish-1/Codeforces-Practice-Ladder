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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    int x=abs(x1-x2),y=abs(y1-y2);

    int rook=0;
    if(x)
    rook++;
    if(y)
    rook++;
    cout<<rook<<xx;
    if(x==y)
    cout<<1<<xx;
    else if((x%2==1 and y%2==0 ) or (x%2==0 and y%2==1))
    cout<<0<<xx;
    else 
    cout<<2<<xx;

    cout<<max(x,y)<<endl;


    return 0;
}
