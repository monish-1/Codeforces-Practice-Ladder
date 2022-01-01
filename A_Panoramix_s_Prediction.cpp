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

vector<bool> prime;

void seive()
{
    int siz=51;
    prime.resize(51,true);
    prime[1]=false;
    prime[2]=true;
    for(int i=4;i<=50;i+=2)
    prime[i]=false;

    for(int i=2;i<siz*siz;i++)
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<siz;j+=i)
            {
                prime[j]=false;
            }
        } 
    }
    
    return;

}
int main()
{
    seive();
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++)
    {
        if(prime[i]==true)
        {
            if(i==m)
            cout<<"YES";
            else
            cout<<"NO";
            break;
        }
        else if(i==m)
        {
            cout<<"NO";
            return 0;
        }
    }
    return 0;
}