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
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	deque<int> q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (k == 1) {
			int a;
			cin >> a;
			q.push_front(a);
		}
		if (k == 2) {
			int a;
			cin >> a;
			q.push_back(a);
		}
		if (k == 3) {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop_front();
			}
			else {
				cout << "-1" << '\n';
			}
		}
		if (k == 4) {
			if (!q.empty()) {
				cout << q.back() << '\n';
				q.pop_back();
			}
			else {
				cout << "-1" << '\n';
			}
		}
		if (k == 5) {
			cout << q.size() << '\n';
		}
		if (k == 6) {
			if (!q.empty()) {
				cout << "0" << '\n';
			}
			else {
				cout << "1" << '\n';
			}
		}
		if (k == 7) {
			if (!q.empty()) {
				cout << q.front() << '\n';
			}
			else {
				cout << "-1" << '\n';
			}
		}
		if (k == 8) {
			if (!q.empty()) {
				cout << q.back() << '\n';
			}
			else {
				cout << "-1" << '\n';
			}
		}

	}

}