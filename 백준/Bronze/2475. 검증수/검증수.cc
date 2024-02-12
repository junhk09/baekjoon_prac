#include <iostream>
using namespace std;

int main() {
	int a[5],b[5],sum=0;

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		b[i] = a[i] * a[i];
	}
	for (int j = 0; j < 5; j++) {
		sum += b[j];
	}
	cout << sum % 10;

}