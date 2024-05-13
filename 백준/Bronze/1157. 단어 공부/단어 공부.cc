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
	int a[26] = { 0 };
	int b = 0,max=0,maxi=0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] < 97) {
			a[s[i] - 65]++;
		}
		else {
			a[s[i] - 97]++;
		}

	}
	for (int i = 0; i < 26; i++) {
		if (max < a[i]) {
			max = a[i];
			maxi = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == a[i]) b++;
	}
	if (b > 1) cout << "?";
	else cout << (char)(maxi + 65);


}