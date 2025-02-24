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
	int n,count=0;
	cin >> n ;
	vector<int>v,w;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
		w.push_back(k);
		}
	sort(w.begin(), w.end());
	w.erase(unique(w.begin(), w.end()), w.end());
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(w.begin(), w.end(), v[i]);
			cout << it - w.begin() << " ";
	}
	
	return 0;
	


}