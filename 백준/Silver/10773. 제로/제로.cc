#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main() {
	int k,n,sum=0;
	stack<int>a;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n != 0) {
			a.push(n);
		}
		else {
			a.pop();
		}
	}
	for (int i = 0; i < k; i++) {
		if (!a.empty()) {
			sum += a.top();
			a.pop();
		}
	}
	cout << sum;
}