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
	int t;
	vector<char>v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k;
		string s;
		cin >> k >> s;
	
		for (int j = 0; j < s.size(); j++) {
			for (int l = 0; l < k; l++) {
				cout << s[j];
				}
		}
		
		cout << endl;

	}

}