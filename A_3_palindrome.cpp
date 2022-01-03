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
    int i=0;

    while(i<n)
    {
        if(i+4<=n)
        cout<<"aabb",i+=4;
        else if(i+3<=n)
        {
            cout<<"aab";
            i+=3;
        }
        else if(i+2<=n)
        cout<<"aa",i+=2;
        else
        cout<<"a",i++;
    }
    

    return 0;
}
