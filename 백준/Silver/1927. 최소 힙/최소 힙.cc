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
	priority_queue<int,vector<int>,greater<int>>pq;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > 0) {
			pq.push(x);
		}
		if (x == 0) {
			if (pq.empty()) {
				cout << 0 << '\n';
				continue;
			}
			cout << pq.top() << '\n';
			pq.pop();
		}

	}

	return 0;


}