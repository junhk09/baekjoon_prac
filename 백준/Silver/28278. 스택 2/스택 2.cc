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
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	stack<int>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			int k;
			cin >> k;
			s.push(k);
		}
		if (a == 2) {
			if (!s.empty()) {
				cout << s.top()<<'\n';
				s.pop();
			}
			else {
				cout << "-1" << '\n';
			}
		}
		if (a == 3) {
			cout << s.size() << '\n';
		}
		if (a == 4) {
			if (s.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		if (a == 5) {
			if (!s.empty()) {
				cout << s.top() << '\n';
			}
			else {
				cout << "-1"<< '\n';
			}
		}

	}

}