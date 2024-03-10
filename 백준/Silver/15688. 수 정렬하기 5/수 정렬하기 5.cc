#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i] <<'\n';
	}
	delete[] a;
}