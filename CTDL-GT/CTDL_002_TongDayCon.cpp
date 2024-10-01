#include<bits/stdc++.h>
using namespace std;
int n, d = 0, k, a[10000] = {0}, b[10000];

void EXP()
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] == 1)
            s += b[i];
    if (s == k)
    {
        d++;
        for (int i = 1; i <= n; i++)
            if (a[i] == 1)
                cout << b[i] << ' ';
        cout << endl;
    }
}

void Solve(int j)
{
    if (j == 0)
        return;
    if (a[j] == 1)
        Solve(j - 1);
    else
    {
        EXP();
        a[j] = 1;
        for (int i = j + 1; i <= n; i++)
            a[i] = 0;
        Solve(n);
    }

}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    Solve(n);
    cout << d;
}