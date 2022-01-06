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
    string s;
    cin>>s;
    int h[26]={};
    for(char a:s)
    h[a-'a']++;
    int even=0,odd=0;
    for(int i=0;i<26;i++)
    {
        if(h[i]&1)
        odd++;
    } 
    if(odd==0)
    cout<<"First";
    else if(odd&1)
    cout<<"First";
    else
    cout<<"Second";
    return 0;
}   
    