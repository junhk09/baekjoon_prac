#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a > 1946) cout << a - 1946;
	else cout << 1946 - a;

}