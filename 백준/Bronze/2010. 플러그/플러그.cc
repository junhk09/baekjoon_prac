#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int n,sum=0;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i] - 1;
	}
	for (int j = 0; j < n; j++) {
		sum += b[j];
	}
	cout << sum + 1;

	
}