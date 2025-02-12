#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
#include <set>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,sum=0,max=0;
	cin >> n;
	vector<int>v;
	vector<int>resv;
	int a[8001] = { 0 };
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		sum += k;
		v.push_back(k);
		a[k+ 4000]++;

	}
	for (int i = 0; i < 8001; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (int i = 0; i < 8001; i++) {
		if (max == a[i]) {
			resv.push_back(i);
		}
	}

	sort(v.begin(), v.end());
	int avg = round((double)sum / n);
	if (avg == -0) {
		avg = 0;
	}
	cout << avg<<'\n';
	cout << v[v.size() / 2]<<'\n';
	if (resv.size() == 1) {
		cout << resv[0] - 4000 << '\n';
	}
	else {
		sort(resv.begin(), resv.end());
		cout << resv[1] - 4000 << '\n';
	}
	cout << v[v.size() - 1] - v[0];

	return 0;


}