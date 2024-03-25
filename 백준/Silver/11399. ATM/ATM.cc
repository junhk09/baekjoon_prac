#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n, sum = 0;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i+1; j++) {
			sum += a[j];
		}
	}
	cout << sum;
	
}