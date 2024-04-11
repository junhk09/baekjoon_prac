#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	int t;
	vector<int>v;
	vector<int>v1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		for (int i = 0; i < a; i++) {
			int k;
			cin >> k;
			v.push_back(k);
		}
		for (int i = 0; i < b; i++) {
			int k;
			cin >> k;
			v1.push_back(k);
		}

		sort(v.begin(), v.end());
		sort(v1.begin(), v1.end());
		while (true) {
			if (v[0] >= v1[0]) {
				v1.erase(v1.begin());
				if (v1.size() == 0) {

					break;
				}
			}
			else  {
				v.erase(v.begin());
				if (v.size() == 0) {

					break;
				}
			}
		}
		if (v.size() == 0) cout << "B" << endl;
		if (v1.size() == 0) cout << "S" << endl;
		v.clear();
		v1.clear();
	}


}