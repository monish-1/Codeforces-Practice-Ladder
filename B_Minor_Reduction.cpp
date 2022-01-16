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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int i=n-1;
       
        while(i>0)
        {
            if(s[i]>'4' and s[i-1]>'4')
            {
                break;
            }
            i--;
        }
        if(i<1)
        {
            int a=(int)s[0]-'0';
           int b=(int)s[1]-'0';
           cout<<a+b;
           for(int j=2;j<n;j++)
           cout<<s[j];

            // int k=0,f=0;
            // for(int j=0;j<n-1;j++)
            // {
            //     int a=(int)s[j]-'0';
            //     int b=(int)s[j+1]-'0';
            //     if(a>0 and b>0)
            //     {
            //         k=j;
            //         f=1;
            //         break;
            //     }
            // }
            // if(f==0)
            // {
            //     cout<<s[0];
            //     for(int j=2;j<n;j++)
            //     cout<<s[j];
            // }
            // else
            // {
            //     for(int j=0;j<k;j++)
            //     cout<<s[j];
            // int a=(int)s[k]-'0';
            // int b=(int)s[k+1]-'0';
            // cout<<a+b;
            // for(int j=k+2;j<n;j++)
            // cout<<s[j];
            // }
            
        }
        else
        {
             int k=0;
            while(k<i-1)
            {
            cout<<s[k];
            k++;
            }
            int a=(int)s[i-1]-'0';
            int b=(int)s[i]-'0';
            cout<<a+b;
            
            i++;
            while(i<n)
            {
                cout<<s[i];
                i++;
            }

        }
        
        cout<<endl;
    }
    return 0;
}
