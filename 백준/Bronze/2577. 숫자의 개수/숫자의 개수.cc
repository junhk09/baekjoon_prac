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
	int a, b, c;
	int res;
	int v[10] = { 0 };
	
	cin >> a >> b >> c;
	res = a * b * c;
	while (res != 0) {
		v[res % 10]++;
		res /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << v[i] << endl;
	}


	return 0;


}