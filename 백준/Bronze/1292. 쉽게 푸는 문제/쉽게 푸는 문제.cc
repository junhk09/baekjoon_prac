#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	int n, m,sum=0;
	cin >> n >> m;
	for (int i = 1; i <= 1000; i++) {
		if (i == 1) a.push_back(i);
		else {
			for (int j = 0; j < i; j++) {
				if (a.size() > 1000) break;
				a.push_back(i);
			}
		}
	}
	for (int i = n-1; i < m; i++) {
		sum += a[i];
	}
	cout << sum;
}