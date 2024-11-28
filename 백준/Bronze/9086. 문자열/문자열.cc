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
	vector<char>v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			v.push_back(s[j]);
		}
		if (v.size() == 1) cout << v[0] << v[0]<<endl;
		else cout << v[0] << v[v.size() - 1]<<endl;
		
		v.clear();
	}

}