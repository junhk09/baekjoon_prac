#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int a[9], sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + 9);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sum - a[i] - a[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << a[k] << endl;
					}
				}
				return 0;

			}
		}
	}




}