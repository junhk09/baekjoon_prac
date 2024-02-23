#include <iostream>
using namespace std;

int main() {
	int n, t, b[9] = { 0 };
	cin >> t;
	for (int j = 0; j < t; j++) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			
			int* a = new int[n];
			cin >> a[i];
			b[j] += a[i];
			delete[]a;
		}
	}
	for (int i = 0; i < t; i++) {
		cout << b[i] << endl;
	}



}