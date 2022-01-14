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
    int c25 = 0, c50 = 0;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 50 and c25 > 0)
        {
            c50++;
            c25--;
        }
        else if (a[i] == 100 and c50 > 0 and c25 > 0)
        {
            c50--;
            c25--;
        }
        else if (a[i] == 25)
        {
            c25++;
        }
        else if(a[i]==100 and c25>2)
        {
            c25-=3;
        }
        else
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
