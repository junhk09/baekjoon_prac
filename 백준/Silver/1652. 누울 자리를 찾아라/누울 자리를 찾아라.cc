#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
int main() {
	int n, count1 = 0, count2 = 0, res1 = 0, res2 = 0;


	cin >> n;
	vector<vector<char>>v(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char a;
			cin >> a;
			v[i].push_back(a);
		}
	}
	for (int i = 0; i < n; i++) {
		count1 = 0;
		for (int j = 0; j < n; j++) {
			if (v[i][j] == '.') {
				count1++;
			}
			else if (v[i][j] == 'X' && count1 >= 2) {
				res1++;
				count1 = 0;
			}
			else {
				count1 = 0;
			}
			
		}
		if (count1 >= 2) res1++;
	}
	for (int i = 0; i < n; i++) {
		count2 = 0;
		for (int j = 0; j < n; j++) {
			if (v[j][i] == '.') {
				count2++;
			}
			else if (v[j][i] == 'X' && count2 >= 2) {
				res2++;
				count2 = 0;
			}
			else {
				count2 = 0;
			}

		}
		if (count2 >= 2) res2++;
	}

	cout << res1 << " " << res2;
}