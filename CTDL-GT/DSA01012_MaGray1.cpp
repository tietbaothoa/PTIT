#include <iostream>
#include <bitset>
using namespace std;

void grayCode(int n) 
{
    for (int i = 0; i < (1 << n); i++) 
    {
        int gray = i ^ (i >> 1);
        bitset<32> gray_bin(gray);
        cout << gray_bin.to_string().substr(32 - n) << ' ';
    }
    cout << endl;
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        grayCode(n);
    }
}
