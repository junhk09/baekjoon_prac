#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool desc(int a, int b) {
	return a > b;
} // 내림차순시 필요한 함수

int main() {
	int n, k, dis = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		int* a = new int[k];
		for (int j = 0; j < k; j++) {
			cin >> a[j];
		}
		sort(a, a + k, desc);
		for (int m = 1; m < k; m++) {
			if (dis < 0) dis *= -1;
			if (dis < a[m - 1] - a[m]) dis = a[m - 1] - a[m];

		}
		cout << "Class " << i + 1 << endl;
		cout << "Max " << a[0] << ", Min " << a[k - 1] << ", Largest gap " << dis << endl;
		dis = 0;
		delete[]a;
	}

}