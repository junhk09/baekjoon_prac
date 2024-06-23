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
	vector <int> v;
	int n, x;
	cin >> n;
	priority_queue<int>q;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x != 0) {
			q.push(x);
		}
		else {
			if (!q.empty()) {
				v.push_back(q.top());
				q.pop();
			}
			else {
				v.push_back(0);
			}
		}



	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}

}