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
	int n,cnt=1;
	stack<int>s;
	cin >> n;
	while (n--) {
		int k;
		cin >> k;
		if (cnt == k) {
			cnt++;
		}
		else  {
			s.push(k);
		}
		
		while (!s.empty() && cnt == s.top()) {
			s.pop();
			cnt++;
		}
	}
	if (s.empty()) {
		cout << "Nice";
	}
	else {
		cout << "Sad";
	}



}

