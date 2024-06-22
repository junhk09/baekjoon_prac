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
	int res;
	vector<string> v = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string s;
	cin >> s;
	for (int i = 0; i < v.size(); i++) {
		while (true) {
			res = s.find(v[i]);
			if (res == string::npos)
				break;
			s.replace(res, v[i].size(), "#");
		}
		

		
	}
	cout << s.size();

}