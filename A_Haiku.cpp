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
    getline(cin, s);
    int a = s.length();
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
        {
            count++;
        }
    }
    string t;
    getline(cin, t);
    int b = t.length();
    int cnt2 = 0;
    for (int i = 0; i < b; i++)
    {
        if (t[i] == 'a' or t[i] == 'e' or t[i] == 'i' or t[i] == 'o' or t[i] == 'u')
        {
            cnt2++;
        }
    }
    string u;
    getline(cin, u);
    int c = u.length();
    int cnt3 = 0;
    for (int i = 0; i < c; i++)
    {
        if (u[i] == 'a' or u[i] == 'e' or u[i] == 'i' or u[i] == 'o' or u[i] == 'u')
        {
            cnt3++;
        }
    }
    if (count == 5 and cnt2 == 7 and cnt3 == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
    return 0;
}
