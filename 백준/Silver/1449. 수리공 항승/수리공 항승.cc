#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
int main() {
	int n, l,count=0,start;
	vector<int>v;
	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	start = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] - start >= l) {
			count++;
			start = v[i];
		}


	}

	cout << count+1;



}