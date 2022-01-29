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
    string s;
    cin>>s;
    int h[26]={};
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        h[s[i]-'a']++;
    }

    for(int i=25;i>=0;i--)
    {
        if(h[i]>0)
        {
            int x=h[i];
            while(x--)
            {
                cout<<(char)(i+'a');
            }
            break;
        }
    }
    
    return 0;
}
