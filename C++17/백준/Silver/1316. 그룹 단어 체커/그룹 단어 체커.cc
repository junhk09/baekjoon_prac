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
	int n,end=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		bool res=true;
		for (int j = 0; j < s.size(); j++) {
			for (int l = 0; l < j; l++) {
				if (s[j] != s[j - 1] && s[j] == s[l]) {
					res = false;
					break;
				}
			}

		}
		if (res) end++;

	}
	cout << end;


}