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
	int n;
	vector<double>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < 7; i++) {
		
		cout << v[i] << endl;
		
	}



}