#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[10001] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a[b]++;
	}
	for (int i = 1; i < 10001; i++) {
		if (a[i]) {
			for (int j = 0; j < a[i]; j++) {
				cout << i << '\n';
			}
		}
	}

}