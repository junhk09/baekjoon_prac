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
	int n;
	vector <int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		cout << upper_bound(v.begin(), v.end(), k) - lower_bound(v.begin(), v.end(), k) << " ";
	}

}