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
	int n,k;
	stack<char>v;
	string s;
	cin >> n;
	cin.ignore();
	while (n--) {
		
		getline(cin, s);
		s += ' ';
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == ' ') {
				while (!v.empty()) {
					cout << v.top();
					v.pop();
				}
				cout << ' ';


			}
			else {
				v.push(s[j]);
			}
		}
		cout << endl;
	}

	


}