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
    w(t)
    {
        int n,m,r,c;
        int b=0;
        cin>>n>>m>>r>>c;
        r--,c--;
        char a[n][m];
        bool f=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='B')
                b++;
                if(i==r and a[i][j]=='B')
                f=true;
                if(j==c and a[i][j]=='B')
                f=true;
            }
        }
        if(b==0)
        cout<<-1<<endl;
        else if(a[r][c]=='B')
        cout<<0<<endl;
        else 
        {
            if(f==true)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }


    }
    return 0;
}
