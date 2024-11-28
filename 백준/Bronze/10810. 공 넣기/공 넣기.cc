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
	int a, b;
	vector<int>v;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		v.push_back(0);
	}
	for (int i = 0; i < b; i++) {
		int n, m, l;
		cin >> n >> m >> l;
		if (n == m) {
			v[n - 1] = l;
			continue;
		}
		for (int j = n - 1; j <= m - 1; j++) {
			v[j] = l;
		}
	}
	for (int i = 0; i < a; i++) {
		cout << v[i] << " ";
	}
}