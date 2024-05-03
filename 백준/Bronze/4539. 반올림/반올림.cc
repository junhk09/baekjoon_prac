#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int k;
		cin >> k;
		for (int i = 10; i < k; i *= 10) {
			if (k % i / (i / 10) >= 5) {
				k = (k / i + 1) * i;
			}
			else {
				k = k / i * i;
			}

		}
		cout << k << endl;
	}


	
}



