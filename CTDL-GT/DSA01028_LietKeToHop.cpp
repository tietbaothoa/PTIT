// #include <bits/stdc++.h>
// using namespace std;
// #define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


// int main() {
//     faster;
//     int n, k;
//     cin >> n >> k;
//     set <int> s;
//     for(int i=0; i<n; i++){
//         int a;
//         cin >> a;
//         s.insert(a);
//     }
//     n = s.size();
//     int a[n+5];
//     int b[n+5];
//     int  i =0;
//     for(auto x : s){
//         b[i++] = x;
//     }
//     for(int i=0; i<k; i++){
//         a[i] = b[i];
//     }
//     int check = 1;
//     while(check){
//         for(int i=0; i<k; i++){
//             cout << a[i] << " ";
//         }
//         cout << endl;
//         int i = k-1,  l=n-1;
//         while(i>=0 && a[i]==b[n-k+i]) i--;
//         if(i>=0){
//            while(a[i]!=b[l]) l--;
//            a[i] =  b[++l];
//            for(int j=i+1; j<k; j++) a[j] = b[++l]; 
//         }
//         else check = 0;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k;
int a[1005];
int b[100] ={0};
void result(){
    for(int i=1; i<=k; i++){
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i){
    for(int j=b[i-1]+1; j<=n-k+i; j++){
        b[i] = j;
        if(i==k) result();
        else Try(i+1);
    }
}

int main() {
    faster;
    cin >> n >> k;
    set <int> s;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int i = 1;
    n=s.size();
    for(int x : s){
        a[i++]=x;
    }
    Try(1);
    return 0;
}