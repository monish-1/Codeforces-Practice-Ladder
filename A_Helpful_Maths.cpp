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
    string a,b="";
    cin>>a;
    for(int i=0;i<a.size();i+=2)
    {
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());

    cout<<b[0];
    for(int i=1;i<b.size();i++)
    {
        cout<<'+'<<b[i];
    }
    return 0;
}


