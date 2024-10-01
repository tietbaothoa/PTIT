// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int n, m,  start;
// int a[1005][1005], visit[1005];

// void convert(){
//     int u, v;
//     memset(a, 0, sizeof(a));
//     memset(visit, 0, sizeof(visit));
//     for(int i=1; i<=m; i++){
//         cin >> u >> v;
//         a[u][v]=1;
//     }
// }

// void DFS(int i){
//     visit[i]=1;
//     cout << i << " ";
//     for(int  j=1; j<=n; j++){
//         if(visit[j]==0  && a[i][j]==1){
//             DFS(j);
//         }
//     }
// }

// int main() {
//     faster;
//     int test;
//     cin >> test;
//     while (test--) {
//         cin >> n >> m >> start;
//         convert();
//         DFS(start);
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int n, m, st, ed, check[1000], nex[1000], note;
vector <int> a[1000];

void init()
{
    note = 0;
    cin >> n >> m >> st >> ed;
    for (int i = 1; i <= n; i++)
    {
        a[i].clear();
        check[i] = 0;
        nex[i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }
}

void DFS()
{
    stack <int> s;
    s.push(st);
    check[st] = 1;
    while (s.empty() == false)
    {
        int i = s.top();
        s.pop();
        check[i] = 1;
        if (i == ed)
        {
            note = 1;
            return;
        }
        for (auto j: a[i])
            if (check[j] == 0)
            {
                s.push(i);
                s.push(j);
                nex[i] = j;
                break;
            }
    }
}

void solve()
{
    DFS();
    if (note == 1)
    {
        while (st != ed)
        {
            cout  << st << ' ';
            st = nex[st];
        }
        cout << ed << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }

}