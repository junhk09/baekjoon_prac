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
bool desc(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, l, h;
	double sum=0;
	vector<int>v;
	cin >> n >> l >> h;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	v.erase(v.begin(), v.begin() + l);
	sort(v.begin(), v.end(), desc);
	v.erase(v.begin(), v.begin() + h);
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	cout.precision(15);
	cout << (sum / (double)v.size());


}