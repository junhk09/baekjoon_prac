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
	int a, b,c;
	cin >> a >> b>>c;
	b += c;
	a += b / 60;
	b %= 60;
	if (a >=24) {
		a %= 24;
	}
	cout << a << " " << b;
}