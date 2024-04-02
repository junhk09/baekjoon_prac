#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
bool cmp(pair<int, int> a,  pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
	}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x>> y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(), v.end(),cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second<<'\n';
	}


}
