#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
int main() {
	int n,sum=0;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		
	}
	sort(b, b + n, desc);
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}
	cout << sum;
}