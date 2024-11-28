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
	int sum=0;
	vector<int>v;
	for (int i = 0; i < 3; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	if (v[0] == v[1]&&v[1] == v[2]) {
		sum = 10000 + 1000 * v[0];
	}
	else if (v[0] == v[1] && v[1] != v[2] ) {
		sum = 1000 + v[0] * 100;
	}
	else if (v[0] != v[1] && v[1] == v[2]) {
		sum = 1000 + v[1] * 100;
	}
	else {
		sum = v[2] * 100;
	}
	cout<<sum;
}