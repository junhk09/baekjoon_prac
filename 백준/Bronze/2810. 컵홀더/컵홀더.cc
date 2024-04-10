#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	int n;
	string s;
	cin >> n >> s;
	int res = n + 1;
	
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'L') {
				res--;
				i++;
			}
		}
		if (res > n) {
			res = n;
	}
	
	cout << res;

}