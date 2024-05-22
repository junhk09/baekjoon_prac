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
	queue<int> q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int k;
			cin >> k;
			q.push(k);
		}
		if (s == "front") {
			if (!q.empty()) {
				cout << q.front()<<'\n';
			}
			else {
				cout << "-1" << '\n';
			}
		}
		if (s == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			}
			else {
				cout << "-1" << '\n';
			}
		}
		if (s == "size") {
			cout << q.size() << '\n';
		}
		if (s == "empty") {
			if (!q.empty()) {
				cout << "0" << '\n';
			}
			else {
				cout << "1" << '\n';
			}
		}
		if (s == "back") {
			if (!q.empty()) {
				cout << q.back() << '\n';
			}
			else {
				cout << "-1" << '\n';
			}
		}

	}

}