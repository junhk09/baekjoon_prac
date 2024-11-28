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
	int n, m;
	vector<int>v;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		v.push_back(i+1);
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		if (a == b) continue;
		swap(v[a - 1], v[b - 1]);
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

}