#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], check  = 0;


void EXP(vector<int> kq)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] == 1)
            s += kq[i - 1];
    if (s == k)
    {
        check = 1;
        cout << '[';
        for (int i = 1; i <= n; i++)
            if (a[i] == 1)
            {
                s = s - kq[i - 1];
                if (s != 0)
                    cout << kq[i - 1] << ' ';
                else
                    cout << kq[i - 1];
            }
        cout << "] ";
    }
}

void Solve(vector<int>kq, int i)
{
    for (int gt = 1; gt >= 0; gt--)
    {
        a[i] = gt;
        if (i == n)
            EXP(kq);
        else
            Solve(kq, i + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        set<int> st;
        check = 0;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            st.insert(h);
        }
        vector <int> kq(st.begin(), st.end());
        Solve(kq, 1);
        if (check == 0)
            cout << -1;
        cout << endl;
    }
}