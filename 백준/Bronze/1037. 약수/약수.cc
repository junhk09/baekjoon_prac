#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>v;
	while (n--) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	cout << v[0] * v[v.size() - 1] << '\n';
}