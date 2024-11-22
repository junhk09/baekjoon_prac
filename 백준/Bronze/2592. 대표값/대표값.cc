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
	vector<int>v;
	vector<int>v1;
	int a[1000] = { 0 };
	int sum=0,cmp,max=0;
	for (int i = 0; i < 10; i++) {
		int k;
		cin >> k;
		v.push_back(k);
		sum += k;
	}
	cmp = v[0];
	for (int i = 0; i < 10; i++) {
		if (cmp == v[i]) {
			a[cmp]++;
		}
		else {
			cmp = v[i];
			a[cmp]++;
		}
	}
	for (int i = 0; i < 1000; i++) {
		if (max < a[i]) {
			max=a[i];
			cmp = i;
		}
	}
	cout << sum / 10 << endl;
	cout << cmp;
}