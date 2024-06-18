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
	queue<int>q;
	int a,b;
	cin >> a>>b;
	for (int i = 1; i <= a; i++) {
		q.push(i);
	}
	cout << "<";
	while (!q.empty()) {
		for (int i = 1; i < b; i++) {
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