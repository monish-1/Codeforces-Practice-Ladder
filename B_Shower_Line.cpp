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
    int n=5;
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    int a[]={0,1,2,3,4};

    int ans=0;
    int happiness=0;
    do
    {
        happiness=0;
        happiness=m[a[0]][a[1]]+m[a[1]][a[0]]+m[a[2]][a[3]]+m[a[3]][a[2]];
        happiness+=m[a[1]][a[2]]+m[a[2]][a[1]]+m[a[3]][a[4]]+m[a[4]][a[3]];
        happiness+=m[a[2]][a[3]]+m[a[3]][a[2]];
        happiness+=m[a[3]][a[4]]+m[a[4]][a[3]];
        ans=max(ans,happiness);
    } while (next_permutation(a,a+n));
    cout<<ans;

    return 0;
}