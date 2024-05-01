#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	string s;
	int count1=0,count2=0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[i + 1]) {
			if (s[i] == '0') {
				count1++;
			}
			else {
				count2++;
			}

		}
	}
	if (count1 < count2) cout << count1;
	else cout << count2;

}