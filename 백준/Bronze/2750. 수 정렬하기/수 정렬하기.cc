#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	int n;
	vector <int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}


}
