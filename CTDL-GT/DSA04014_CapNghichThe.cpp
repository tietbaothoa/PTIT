#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int count = 0;

void merge(int a[], int l, int m, int r) 
{ 
    int n1 = m - l + 1; 
    int n2 = r - m; 

    int L[n1], R[n2]; 
  
    for(int i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for(int j = 0; j < n2; j++) 
        R[j] = a[m + 1 + j]; 
    int i = 0;  
      
    int j = 0;  
      
    int k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])  
        { 
            a[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            a[k] = R[j]; 
            j++; 
            count += n1-i+1;
        } 
        k++; 
    } 
 
    while (i < n1)  
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any  
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
    return count;
} 

int mergeSort(int a[], int l, int r){
    if(l<r){
        int count = 0;
        int m = l +(r-l)/2;
        count += mergeSort(a, l, m);
        count += mergeSort(a, m+1, r);
        count += merge(a, l, m, r);
    }
    return count;
}

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        mergeSort(a, 0, n-1);
        cout << endl;
    }
    return 0;
}