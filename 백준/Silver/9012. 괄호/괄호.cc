#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <stack>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		stack<char>v;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (v.empty()) {
				v.push(s[j]);
			}
			else {
				if (s[j] == ')' && v.top() == '(') {
					v.pop();
				}

				else {
					v.push(s[j]);

				}
			}
		}
		if (v.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;



	}








}