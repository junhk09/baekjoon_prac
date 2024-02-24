#include <iostream>
using namespace std;

int main() {
	int a[7], sum = 0, min=0;
	for (int i = 0; i < 7; i++) {
		cin >> a[i];
		
		if (a[i] % 2 != 0) {
			sum += a[i];
			if (min == 0) {
				min = a[i];
			}
			if (min > a[i]) {
				min = a[i];
			}	
		}


	}
	if (min == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << endl;
	cout << min << endl;

}