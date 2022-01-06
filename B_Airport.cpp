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
    int n,m;
    cin>>n>>m;
    int a[m];
    priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        pq.push(a[i]);
        p.push(a[i]);
    }
    int k=n;
    int a1=0,b=0;
    while(k--)
    {
        int x=pq.top();
        a1+=x;
        pq.pop();
        x--;
        if(x>0)
        pq.push(x);

        int y=p.top();
        b+=y;
        p.pop();
        y--;
        if(y>0)
        p.push(y);
    }
    cout<<a1<<xx<<b;


    return 0;
}