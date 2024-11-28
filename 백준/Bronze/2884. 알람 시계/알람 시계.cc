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
	int h, m;
	cin >> h >> m;
	if (h == 0&&m<45) {
		h = 24;
	}
	if (m >= 45) {
		m -= 45;
		
	}
	else {
		h -= 1;
		m += 60;
		m -= 45;
	}
	cout << h << " " << m;


}