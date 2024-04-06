#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	string a;
	cin >> a;
	vector<vector<string>>v(a.size());
	string k;
	k = a;
	for (int i = 0; i < a.size(); i++) {
		
		v[i].push_back(k);
		k.erase(k.begin());
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << endl;
		}
	}

}
