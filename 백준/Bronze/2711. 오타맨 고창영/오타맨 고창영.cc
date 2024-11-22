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
	int t;
	vector<string>v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k;
		string s;
		cin >> k >> s;
		s.erase(s.begin()+k-1);
		v.push_back(s);
	}
	for (int i = 0; i < t; i++) {
		cout << v[i] << endl;
	}
}