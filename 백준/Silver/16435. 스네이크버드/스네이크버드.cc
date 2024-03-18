#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
			if (l >= a[i]) {
				l++;
			}
		
	}
	
	cout << l;

}