#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
#include <utility>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	deque<pair<int,int>>d;
	vector<int>v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
			d.push_back(make_pair(k, i + 1));
	}
	while (true)
	{
		int cnt=d.front().first;
		cout << d.front().second<<" ";
		d.pop_front();
		if (d.empty()) {
			break;
		}
		if (cnt > 0) {
			for (int i = 0; i < cnt - 1; i++) {
				d.push_back(d.front());
				d.pop_front();
			}
		}
		else {
			for (int i = cnt; i < 0; i++) {
				
				d.push_front(d.back());
				d.pop_back();
			}
		}




	}



}

