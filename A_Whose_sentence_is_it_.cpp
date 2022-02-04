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
    cin >> n;
    string a;

    string miao = "miao.", la = "lala.";
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin,a);
        // cout<<a<<endl;

        int s = a.size();
        if (s<5 or (a.substr(0, 5) == miao and a.substr(s - 5, 5) == la))
            cout << "OMG>.< I don't know!\n";
        else if (a.substr(0, 5) == miao)
            cout << "Rainbow's\n";
        else if(a.substr(s - 5, 5) == la)
            cout << "Freda's\n";
        else
            cout << "OMG>.< I don't know!\n";
    }

    return 0;
}
