#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	int n;
	vector<pair<int, int>>v;
	cin >> n;
	int* rank = new int[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
		rank[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i].first < v[j].first&&v[i].second<v[j].second) {
				rank[i]++;
			}
		}

	}
	for (int i = 0; i < n; i++) {
		cout << rank[i] << " ";
	}




}
