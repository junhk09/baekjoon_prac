#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <map>
using namespace std;
bool cmp(string a, string b) {
	if (a.size() == b.size()) return a < b;
	
	return a.size() < b.size();
}
int main() {
	int n;
	cin >> n;
	vector<string>v;
	map<string, int>m;
	for (int i = 0; i < n; i++) {
		string k;
		cin >> k;
		if (find(v.begin(), v.end(), k) == v.end()) {
			v.push_back(k);
		}
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}
