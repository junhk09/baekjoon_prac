#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int n, x, res = 0;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	cin >> x;
	int left = 0, right = n - 1;
	while (left < right) {
		if (a[left] + a[right] == x) {
			res++;
			left++;
			right--;
		}
		else if (a[left] + a[right] > x) {
			right--;
		}
		else {
			left++;
		}
	}



	cout << res;

}