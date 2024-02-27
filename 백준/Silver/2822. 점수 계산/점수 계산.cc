#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
int main() {
	int a[8],i,b[8],sum=0,c[5];
	for (i = 0; i < 8; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + i, desc);

	for (int j = 0; j < 5; j++) {
		sum += a[j];
	}
	cout << sum<<endl;
	for (int k = 0; k < 8; k++) {
		for (int l = 0; l < 5; l++) {
			if (b[k] == a[l]) {
				cout << k + 1 << ' ';
			}
		}

	}


}