#include <bits/stdc++.h>
using namespace std;

int n, k, t = 0;
char a[10005];
string st[10005];

void check()
{
    int d = 0, dem = 0;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        s = s + a[i];
        int kt = 1;
        for (int j = i; j <= i + k - 1; j++)
            if (a[j] != 'A')
            {
                kt = 0;
                break;
            }
        if(kt)
            d++;
    }
    if (d == 1)
    {
        st[t] = s;
        t++;
    }
}

void solve(int i)
{
    for (char gt = 'A'; gt <= 'B'; gt++)
    {
        a[i] = gt;
        if (i == n)
            check();
        else
            solve(i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    solve(1);
    cout << t << endl;
    for (int i = 0; i < t; i++)
        cout << st[i] << endl;
}