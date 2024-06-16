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
	int n,m;
	vector <int> v;
	vector <int>v2;
	vector <int> v3;
	cin >> n>>m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		v2.push_back(b);
	}
	sort(v2.begin(), v2.end());
	for (int i = 0; i < n; i++) {
		if (!binary_search(v2.begin(), v2.end(), v[i])) {
			v3.push_back(v[i]);
		}
	}
	sort(v3.begin(), v3.end());
	cout << v3.size() << endl;
	for (int i = 0; i < v3.size(); i++) {
		cout << v3[i] << " ";

	}


}