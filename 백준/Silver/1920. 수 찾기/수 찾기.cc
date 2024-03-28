#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n;
	vector<int>a;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		int L;
		cin >> L;
		if (binary_search(a.begin(), a.end(), L)==true) {
			cout << "1" << '\n';
		}
		else {
			cout << "0" << '\n';
		}
	}




}