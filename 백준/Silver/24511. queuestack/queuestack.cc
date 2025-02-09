#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int>v;
	deque<int>d;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (v[i] == 0) {
			d.push_back(k);
		}
	}
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		d.push_front(k);
		cout << d.back() << " ";
		d.pop_back();

	}




}




