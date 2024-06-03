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
	queue<int>q;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << "<";
	while (!q.empty()) {
		for (int i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
			
		}
		cout << q.front();
		if (q.size() != 1) {
			cout << ", ";
		}
		q.pop();

	}
	cout << ">";



}