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
	int n,res=0;
	cin >> n;
	while (n >= 0) {
		if (n % 5 == 0) {
			res += (n / 5);
			cout << res << endl;
			return 0;
		}
		n -= 3;
		res++;
	}
	cout << -1 << endl;

}