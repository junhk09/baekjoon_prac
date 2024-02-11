#include <iostream>
using namespace std;
int main() {
	int n,max = 0;
	double sum = 0;
	cin >> n;
	double* a = new double[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}
	for (int j = 0; j < n; j++) {
		a[j] = a[j] / max * 100;
		sum += a[j];
	}
	
	cout << (sum / n);
	delete[] a;
}