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
	
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		int k;
		cin >> k;
		v.push_back(k % 42);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()),v.end());

	cout << v.size();



}