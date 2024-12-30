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
	string s;
	vector<char>v;
		cin >> s;
	
	for (char i = 'a'; i <= 'z'; i++) {
		v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << (int)s.find(v[i]) << " ";
	}

}