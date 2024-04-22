#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
int main() {
	vector <int> v;
	vector<int>v1;
	int res;
	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		v1.push_back(a);
	}
	sort(v.begin(), v.end(),desc);
	for (int i = 0; i < 9; i++) {
		if (v[0] == v1[i]) {
			res = i;
		}
	}
	cout << v[0]<<endl<<res+1;
}