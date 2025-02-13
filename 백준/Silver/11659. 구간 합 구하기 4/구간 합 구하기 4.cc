#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
#include <set>
#include <cmath>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int>v(n+1);
	v[0] = 0;
	for (int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		v[i] = v[i - 1] + k;
	}
	
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << v[b] - v[a - 1] << '\n';
	}
	



	return 0;


}