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
bool desc(int a,int b) {

	return a > b;

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int>v;
	int n,m;
	cin >> n>>m;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end(),desc);

	
		cout << v[m-1];
	




	return 0;


}