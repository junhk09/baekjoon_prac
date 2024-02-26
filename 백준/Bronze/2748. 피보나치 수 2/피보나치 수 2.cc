#include <iostream>
using namespace std;
int main() {
	long long int a[90];
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= 90; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	int n;
	cin >> n;
	
	cout << a[n];


}


