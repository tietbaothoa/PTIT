#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int M[100000], N[100001] = { 0 };
	int res = 0;
	for (int i = 0; i < n; i++) {
		cin >> M[i];
		N[M[i]] = N[M[i] - 1] + 1;
		res = max(res, N[M[i]]);
	}
	cout << n - res << endl;
}
//Quá trình sắp xếp dựa trên việc tính toán mảng N để đếm số lượng phần tử liên tiếp tối đa trong dãy ban đầu. Kết quả cuối cùng được tính bằng cách lấy tổng số phần tử của dãy và trừ đi số lượng phần tử liên tiếp tối đa.