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
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x,n,sum=0;
	vector<int>v;
	cin >> x>>n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a * b);
	}
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}
	if (sum == x) cout << "Yes";
	else cout << "No";

}