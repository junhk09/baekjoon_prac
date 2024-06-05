#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c, sum = 0, count = 0;
	cin >> c;
	vector<int>v;

	for (int i = 0; i < c; i++) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int k;
			cin >> k;
			v.push_back(k);
		}

		for (int j = 0; j < n; j++) {
			sum += v[j];
		}
		double res = (sum / (double)n);
		for (int j = 0; j < n; j++) {
			if (res < v[j]) {
				count++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << (count * 100 / (double)n) << "%\n";
		v.clear();
		sum = 0;
		count = 0;
	}



}