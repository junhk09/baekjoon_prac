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
	queue<int>q;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size()!=1) {
		q.pop();
		int k = q.front();
		q.pop();
		q.push(k);
	}
	cout << q.front();
}