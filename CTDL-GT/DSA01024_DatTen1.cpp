// #include <bits/stdc++.h>
// using namespace std;

// set <string> st;

// void np(int a[], int n, int k, int i)
// {
//     for (int gt = a[i - 1] + 1; gt <= n - k + i; gt++)
//     {
//         a[i] = gt;
//         if (i == k)
//         {
//             string sum = "";
//             set <string> :: iterator it = st.begin();
//             for (int j = 1; j <= k ; j++)
//             {
//                 it = st.begin();
//                 advance(it, a[j] - 1);
//                 sum = sum + *it + ' ';
//             }
//             cout << sum << endl;
//         }
//         else
//             np (a, n, k, i + 1);
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);
//     int n, k, a[1005] = {0};
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++)
//     {   
//         string h;
//         cin >> h;
//         st.insert(h);
//     }
//     n = st.size();
//     np(a, n, k, 1);

// }


#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    set <string> s;
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        string n;
        cin >> n;
        s.insert(n);
    }
    n = s.size();
    string a[n+5], b[k+5];
    int i = 0;
    for(auto x : s){
        a[i++] = x;
    }
    for(int i=0; i<k; i++){
        b[i]=a[i];
    }
    int check = 1;
    while(check){
        for(int i=0; i<k; i++){
            cout << b[i] << " ";
        }
        cout << endl;
        int i = k-1, l =n-1;
        while(i>=0 && b[i]==a[n-k+i]) i--;
        if(i>=0){
            while(b[i]!=a[l]) l--;
            b[i] = a[++l];
            for(int j=i+1; j<k; j++){
                b[j] = a[++l];
            }
        }
        else check = 0;
    }
    return 0;
}