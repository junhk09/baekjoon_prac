#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n,count=0;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int k;
	cin >> k;
	for (int i = 0; i < n; i++) {
		if (v[i] == k) {
			count++;
		}
	}
	cout << count;

}