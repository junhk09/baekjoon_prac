#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	int* n = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> n[i];
	}
	sort(n, n + a);
	cout << n[b-1];

}