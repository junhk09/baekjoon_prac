#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n, tmp, i;
	cin >> n;
	i = 2;
	vector<int>v(n + 1);
	while (true) {
		if (n % i == 0) {
			n /= i;
			cout << i << endl;
		}
		else {
			i++;
		}
		if (n == 1) break;
	}
	
	
}