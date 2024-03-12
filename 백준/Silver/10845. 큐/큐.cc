#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n;
	queue<int>a;
	string b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b;
		if (b == "push") {
			int k;
			cin >> k;
			a.push(k);
		}
		if (b == "front") {
			if (!a.empty()) {
				cout << a.front() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		if (b == "back") {
			if (!a.empty()) {
				cout << a.back() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		if (b == "size") {
			cout << a.size() << endl;
		}
		if (b == "empty") {
			if (!a.empty()) {
				cout << 0 << endl;
			}
			else {
				cout << 1 << endl;
			}
		}
		if (b == "pop") {
			if (!a.empty()) {
				cout << a.front() << endl;
				a.pop();
			}
			else {
				cout << -1 << endl;
			}
		}
	}


}