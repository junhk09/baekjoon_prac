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
	map<string, string,greater<string>> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a,b;
		cin >> a>>b;
		if (b == "enter") {
			m.insert(make_pair(a,b));
		}
		else  {
			m.erase(a);
		}
	}

	for (auto it = m.begin(); it != m.end(); ++it) {
		cout << it->first << '\n';
	}	


}