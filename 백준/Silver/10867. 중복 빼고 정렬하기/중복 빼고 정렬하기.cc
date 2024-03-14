#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if ( a[i] == a[i + 1]) continue;
		else cout << a[i] << " ";


	}



}