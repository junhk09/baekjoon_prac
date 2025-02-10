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
	cout.tie(NULL);
	map<string, int> m;

	vector <string> v;
	vector <string> v1;
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		string k;
		cin >> k;
		m.insert(pair<string, int>(k, i));
		v1.push_back(k);
	}
	for (int i = 0; i < b; i++) {
		string k;
		cin >> k;
		if (k[0] >= 65 && k[0] <= 90) {
			auto it = m.find(k);
			if (it != m.end()) {

				v.push_back(to_string(it->second));
			}
		}
		else {

			int l = stoi(k);
			v.push_back(v1[l - 1]);


		}

	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';

	}


	return 0;


}