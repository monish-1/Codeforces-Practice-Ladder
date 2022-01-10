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
    string a, b;
    getline(cin, a);
    getline(cin, b);
    map<char, int> m;
    for (int i = 0; i < a.size(); i++)
    {
        m[a[i]]++;
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == ' ')
            continue;
        else if (m.count(b[i]) == 0 or m[b[i]] == 0)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            m[b[i]]--;
        }
    }
    cout << "YES";
    return 0;
}
