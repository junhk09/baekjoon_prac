#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set<string>st;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j =1; j <=s.size(); j++) {
			st.insert(s.substr(i, j)); 
		}
	}
	cout << st.size();

	return 0;


}