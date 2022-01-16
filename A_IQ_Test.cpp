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
    int n=4;
    vector<string> v(4);

    for(auto &x:v)
    cin>>x;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int x=0;
            char c='#';
            if(v[i][j]=='#') x++;
            if(v[i][j+1]=='#') x++;
            if(v[i+1][j]=='#') x++;
            if(v[i+1][j+1]=='#') x++;

            if(x==0 or x==1 or x==3 or x==4)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";


    int black=0;
    

    return 0;
}
